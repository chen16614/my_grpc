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
#include "one_to_one.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerReader;
using grpc::ServerReaderWriter;
using grpc::ServerWriter;
using grpc::Status;
using oto::one_to_one;
using oto::addition;
using oto::count;
using std::chrono::system_clock;

int32_t counter0;

class OneToOneImpl final : public one_to_one::Service {
    Status Add_count(ServerContext* context, const addition* request,
                    count* reply) override {
        
        counter0=counter0+request->index();

        reply->set_result(counter0);
        return Status::OK;        
    }
};

void RunServer(){
    std::string server_address("0.0.0.0:50051");
    OneToOneImpl service;

    ServerBuilder builder;

    builder.AddListeningPort(server_address,grpc::InsecureServerCredentials());
//如何理解InsecureServerCredentials()的证书？
    builder.RegisterService(&service);

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout<<"Server listening on"<<server_address<<std::endl;

    server->Wait();
}

int main(int argc, char** argv) {
    RunServer();

    return 0;
}