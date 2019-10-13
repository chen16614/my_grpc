#include <algorithm>
#include <chrono>
#include <cmath>
#include <iostream>
#include <memory>
#include <string>

#include <grpc/grpc.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/server_context.h>
#include <grpcpp/security/server_credentials.h>
#include "several_to_one.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerReader;
using grpc::ServerReaderWriter;
using grpc::ServerWriter;
using grpc::Status;

using sto::several_to_one;
using sto::AddCount0Request;
using sto::ValueOfCount0;

std::mutex mtx;

int32_t counter0;
int32_t counter1;

class SeveralToOneImpl final : public several_to_one::Service {
    Status GetCount0(ServerContext* context,const AddCount0Request* request,
                    ValueOfCount0* reply) override {
        mtx.lock();
        counter0=counter0+request->index();
        reply->set_value0(counter0);
        counter1=counter1+request->index();
        reply->set_value1(counter1);
        mtx.unlock();
        return Status::OK; 
                    }
};

void RunServer(){
    std::string server_address("0.0.0.0:50051");
    SeveralToOneImpl service;

    ServerBuilder builder;

    builder.AddListeningPort(server_address,grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout<<"Server listening on"<<server_address<<std::endl;

    server->Wait();
}

int main(int argc, char** argv) {
    RunServer();

    return 0;
}