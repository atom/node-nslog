#include "nslog.h"

#include "nan.h"
using namespace v8;

namespace {

NAN_METHOD(Log) {
  NanScope();

  String::Utf8Value utf8_string(Local<String>::Cast(args[0]));
  nslog::Log(*utf8_string);

  NanReturnUndefined();
}

void Init(Handle<Object> exports) {
  NODE_SET_METHOD(exports, "log", Log);
}

}  // namespace

NODE_MODULE(nslog, Init)
