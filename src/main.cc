#include "nslog.h"

#include <node.h>
using namespace v8;

namespace {

Handle<Value> Log(const Arguments& args) {
  String::Utf8Value utf8_string(Local<String>::Cast(args[0]));
  nslog::Log(*utf8_string);
  return Undefined();
}

void Init(Handle<Object> exports) {
  NODE_SET_METHOD(exports, "log", Log);
}

}  // namespace

NODE_MODULE(nslog, Init)
