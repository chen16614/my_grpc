#include <chrono>
#include <iostream>
#include <memory>
#include <random>
#include <string>
#include <thread>

#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include "SeveralToSeveral.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using sts::SeveralToSeveral;
using sts::AddCntRequest;
using sts::ValueOfCnt;

class GetValueClient{
    public:
        GetValueClient(std::shared_ptr<Channel>channel)
            : stub_(SeveralToSeveral::NewStub(channel)){}
        
        int32_t GetCnt(int32_t &AddIndex,int32_t &value){
            AddCntRequest request;
            request.set_index(AddIndex);
            ValueOfCnt reply;
            ClientContext context;

            Status status =stub_->GetCnt(&context,request,&reply);

            value=reply.value();
            
            if(status.ok()){
                return 1;
            }
            else
            {
                std::cout<<status.error_code()<<":"<<status.error_message()
                            <<std::endl;
                return 0;
            }
        }

    private:
    std::unique_ptr<SeveralToSeveral::Stub> stub_;
};

int main(int argc, char** argv) {
    GetValueClient greeter(grpc::CreateChannel(
      "localhost:50051", grpc::InsecureChannelCredentials()));

    GetValueClient greeter1(grpc::CreateChannel(
      "localhost:50050", grpc::InsecureChannelCredentials()));
    
    int32_t AddCntIndex=1;
    int32_t replyCount0=0;
    int32_t replyCount1=0;
    greeter.GetCnt(AddCntIndex,replyCount0);
    greeter1.GetCnt(AddCntIndex,replyCount1);
    std::cout<<"Greeter received:value of server0 is "<<replyCount0<<std::endl;
    std::cout<<"Greeter received:value of server1 is "<<replyCount1<<std::endl;
    
    return 0;
}