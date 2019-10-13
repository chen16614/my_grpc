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
#include "several_to_one.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using sto::several_to_one;
using sto::AddCount0Request;
using sto::ValueOfCount0;


class GetValueClient{
    public:
        GetValueClient(std::shared_ptr<Channel>channel)
            : stub_(several_to_one::NewStub(channel)){}

        int32_t GetCount0(int32_t &AddIndex,int32_t &value0,int32_t &value1){
            AddCount0Request request;
            request.set_index(AddIndex);
            ValueOfCount0 reply;
            ClientContext context;

            Status status = stub_->GetCount0(&context,request,&reply);

            value0=reply.value0();
            value1=reply.value1();
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
    std::unique_ptr<several_to_one::Stub> stub_;
};

int main(int argc, char** argv) {
    GetValueClient greeter(grpc::CreateChannel(
      "localhost:50051", grpc::InsecureChannelCredentials()));
    int32_t AddCount0Index=1;

    while (1)
    {
        int32_t replyCount0=0;
        int32_t replyCount1=0;
        greeter.GetCount0(AddCount0Index,replyCount0,replyCount1);
        std::cout<<"Greeter received:value of counter0 is "<<replyCount0<<std::endl;
        std::cout<<"Greeter received:value of counter1 is "<<replyCount1<<std::endl;
    }
    return 0;
}