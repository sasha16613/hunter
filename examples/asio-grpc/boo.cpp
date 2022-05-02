#include <agrpc/asioGrpc.hpp>

#include <iostream>

int main() {
  agrpc::GrpcContext grpc_context{std::make_unique<grpc::CompletionQueue>()};
  grpc::Alarm alarm;
  agrpc::wait(alarm,
              std::chrono::system_clock::now() + std::chrono::milliseconds(10),
              boost::asio::bind_executor(grpc_context, [](bool ok) {
                std::cout << "Waited for grpc::Alarm: " << ok << std::endl;
              }));
  grpc_context.run();
}
