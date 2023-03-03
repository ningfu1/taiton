#include <napi.h>
#include <iostream>

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
  std::cout << "Hello World!" << std::endl;
  return exports;
}

NODE_API_MODULE(testaddon, InitAll)