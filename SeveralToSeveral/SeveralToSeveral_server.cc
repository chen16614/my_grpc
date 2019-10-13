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
#include "SeveralToSeveral.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerReader;
using grpc::ServerReaderWriter;
using grpc::ServerWriter;
using grpc::Status;

using sts::SeveralToSeveral;
using sts::AddCntRequest;
using sts::ValueOfCnt;

int32_t cnt;

class SeveralToSeveralImp final :public SeveralToSeveral::Service {
    Status GetCnt(ServerContext* context,const AddCntRequest* request,
                    ValueOfCnt* reply) override {
        cnt+=request->index();
        reply->set_value(cnt);
        return Status::OK;
                    }
};

void RunServer(){
    std::string server_address("0.0.0.0:50051");
    SeveralToSeveralImp service;

    ServerBuilder builder;

    builder.AddListeningPort(server_address,grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout<<"Server listening on"<<server_address<<std::endl;

    server->Wait();
}

int main(int argc, char** argv) {
    cnt=0;
    RunServer();

    return 0;
}