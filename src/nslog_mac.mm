#import <Foundation/Foundation.h>
#include <node.h>
#include <v8.h>
#include <string>

using namespace std;
using namespace v8;

extern Handle<Value> Log(const Arguments& args);

void init(Handle<Object> exports) {
  exports->Set(String::NewSymbol("log"),
      FunctionTemplate::New(Log)->GetFunction());
}

NODE_MODULE(nslog, init)

Handle<Value> Log(const Arguments& args) {
  String::Utf8Value utf8StringToLog(Local<String>::Cast(args[0]));
  string stringToLog(*utf8StringToLog);

  NSLog(@"%s", stringToLog.data());
  HandleScope scope;
  return scope.Close(Null());
}
