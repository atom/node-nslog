#include "nslog.h"

#include "nan.h"
using namespace v8;

namespace {

NAN_METHOD(Log) {
  Nan::HandleScope scope;

  Nan::Utf8String utf8_string(Local<Value>::Cast(info[0]));
  nslog::Log(*utf8_string);

  return;
}

void Init(Local<Object> exports) {
  Nan::SetMethod(exports, "log", Log);
}

}  // namespace

NODE_MODULE(nslog, Init)
