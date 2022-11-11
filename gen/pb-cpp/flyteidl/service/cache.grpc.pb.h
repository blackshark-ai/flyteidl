// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: flyteidl/service/cache.proto
#ifndef GRPC_flyteidl_2fservice_2fcache_2eproto__INCLUDED
#define GRPC_flyteidl_2fservice_2fcache_2eproto__INCLUDED

#include "flyteidl/service/cache.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc_impl {
class Channel;
class CompletionQueue;
class ServerCompletionQueue;
}  // namespace grpc_impl

namespace grpc {
namespace experimental {
template <typename RequestT, typename ResponseT>
class MessageAllocator;
}  // namespace experimental
}  // namespace grpc_impl

namespace grpc {
class ServerContext;
}  // namespace grpc

namespace flyteidl {
namespace service {

// CacheService defines an RPC Service for interacting with cached data in Flyte on a high level basis.
class CacheService final {
 public:
  static constexpr char const* service_full_name() {
    return "flyteidl.service.CacheService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Evicts all cached data for the referenced :ref:`ref_flyteidl.admin.Execution` or :ref:`ref_flyteidl.admin.TaskExecution`.
    virtual ::grpc::Status EvictCache(::grpc::ClientContext* context, const ::flyteidl::service::EvictCacheRequest& request, ::flyteidl::service::EvictCacheResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::flyteidl::service::EvictCacheResponse>> AsyncEvictCache(::grpc::ClientContext* context, const ::flyteidl::service::EvictCacheRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::flyteidl::service::EvictCacheResponse>>(AsyncEvictCacheRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::flyteidl::service::EvictCacheResponse>> PrepareAsyncEvictCache(::grpc::ClientContext* context, const ::flyteidl::service::EvictCacheRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::flyteidl::service::EvictCacheResponse>>(PrepareAsyncEvictCacheRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // Evicts all cached data for the referenced :ref:`ref_flyteidl.admin.Execution` or :ref:`ref_flyteidl.admin.TaskExecution`.
      virtual void EvictCache(::grpc::ClientContext* context, const ::flyteidl::service::EvictCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void EvictCache(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::flyteidl::service::EvictCacheResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void EvictCache(::grpc::ClientContext* context, const ::flyteidl::service::EvictCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void EvictCache(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::flyteidl::service::EvictCacheResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::flyteidl::service::EvictCacheResponse>* AsyncEvictCacheRaw(::grpc::ClientContext* context, const ::flyteidl::service::EvictCacheRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::flyteidl::service::EvictCacheResponse>* PrepareAsyncEvictCacheRaw(::grpc::ClientContext* context, const ::flyteidl::service::EvictCacheRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status EvictCache(::grpc::ClientContext* context, const ::flyteidl::service::EvictCacheRequest& request, ::flyteidl::service::EvictCacheResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::flyteidl::service::EvictCacheResponse>> AsyncEvictCache(::grpc::ClientContext* context, const ::flyteidl::service::EvictCacheRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::flyteidl::service::EvictCacheResponse>>(AsyncEvictCacheRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::flyteidl::service::EvictCacheResponse>> PrepareAsyncEvictCache(::grpc::ClientContext* context, const ::flyteidl::service::EvictCacheRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::flyteidl::service::EvictCacheResponse>>(PrepareAsyncEvictCacheRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void EvictCache(::grpc::ClientContext* context, const ::flyteidl::service::EvictCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response, std::function<void(::grpc::Status)>) override;
      void EvictCache(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::flyteidl::service::EvictCacheResponse* response, std::function<void(::grpc::Status)>) override;
      void EvictCache(::grpc::ClientContext* context, const ::flyteidl::service::EvictCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void EvictCache(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::flyteidl::service::EvictCacheResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::flyteidl::service::EvictCacheResponse>* AsyncEvictCacheRaw(::grpc::ClientContext* context, const ::flyteidl::service::EvictCacheRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::flyteidl::service::EvictCacheResponse>* PrepareAsyncEvictCacheRaw(::grpc::ClientContext* context, const ::flyteidl::service::EvictCacheRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_EvictCache_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Evicts all cached data for the referenced :ref:`ref_flyteidl.admin.Execution` or :ref:`ref_flyteidl.admin.TaskExecution`.
    virtual ::grpc::Status EvictCache(::grpc::ServerContext* context, const ::flyteidl::service::EvictCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_EvictCache : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_EvictCache() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_EvictCache() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status EvictCache(::grpc::ServerContext* context, const ::flyteidl::service::EvictCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestEvictCache(::grpc::ServerContext* context, ::flyteidl::service::EvictCacheRequest* request, ::grpc::ServerAsyncResponseWriter< ::flyteidl::service::EvictCacheResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_EvictCache<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_EvictCache : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_EvictCache() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::flyteidl::service::EvictCacheRequest, ::flyteidl::service::EvictCacheResponse>(
          [this](::grpc::ServerContext* context,
                 const ::flyteidl::service::EvictCacheRequest* request,
                 ::flyteidl::service::EvictCacheResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->EvictCache(context, request, response, controller);
                 }));
    }
    void SetMessageAllocatorFor_EvictCache(
        ::grpc::experimental::MessageAllocator< ::flyteidl::service::EvictCacheRequest, ::flyteidl::service::EvictCacheResponse>* allocator) {
      static_cast<::grpc::internal::CallbackUnaryHandler< ::flyteidl::service::EvictCacheRequest, ::flyteidl::service::EvictCacheResponse>*>(
          ::grpc::Service::experimental().GetHandler(0))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_EvictCache() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status EvictCache(::grpc::ServerContext* context, const ::flyteidl::service::EvictCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void EvictCache(::grpc::ServerContext* context, const ::flyteidl::service::EvictCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_EvictCache<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_EvictCache : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_EvictCache() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_EvictCache() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status EvictCache(::grpc::ServerContext* context, const ::flyteidl::service::EvictCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_EvictCache : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_EvictCache() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_EvictCache() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status EvictCache(::grpc::ServerContext* context, const ::flyteidl::service::EvictCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestEvictCache(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_EvictCache : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_EvictCache() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->EvictCache(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_EvictCache() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status EvictCache(::grpc::ServerContext* context, const ::flyteidl::service::EvictCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void EvictCache(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_EvictCache : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_EvictCache() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::flyteidl::service::EvictCacheRequest, ::flyteidl::service::EvictCacheResponse>(std::bind(&WithStreamedUnaryMethod_EvictCache<BaseClass>::StreamedEvictCache, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_EvictCache() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status EvictCache(::grpc::ServerContext* context, const ::flyteidl::service::EvictCacheRequest* request, ::flyteidl::service::EvictCacheResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedEvictCache(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::flyteidl::service::EvictCacheRequest,::flyteidl::service::EvictCacheResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_EvictCache<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_EvictCache<Service > StreamedService;
};

}  // namespace service
}  // namespace flyteidl


#endif  // GRPC_flyteidl_2fservice_2fcache_2eproto__INCLUDED
