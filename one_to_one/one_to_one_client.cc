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
#include "one_to_one.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using oto::one_to_one;
using oto::addition;
using oto::count;

class AdditionClient{
    public:
        AdditionClient(std::shared_ptr<Channel>channel)
            : stub_(one_to_one::NewStub(channel)){}//stub?

        int32_t Add_count(int32_t &AddIndex){
            addition request;
            request.set_index(AddIndex);
            count reply;
            ClientContext context;

            Status status = stub_->Add_count(&context,request,&reply);

            if(status.ok()){
                return reply.result();
            }
            else
            {
                std::cout<<status.error_code()<<":"<<status.error_message()
                            <<std::endl;
                return 0;
            }
        }

    private:
    std::unique_ptr<one_to_one::Stub> stub_;
};

int main(int argc, char** argv) {
    AdditionClient greeter(grpc::CreateChannel(
      "localhost:50051", grpc::InsecureChannelCredentials()));//Chnnel?
    int32_t AddIndex=2;
    int32_t reply=greeter.Add_count(AddIndex);
    std::cout<<"Greeter received: "<<reply<<std::endl;
    return 0;
}