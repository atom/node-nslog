#include "nslog.h"

#include <iostream>

namespace nslog {

void Log(const std::string& message) {
  std::cout << message;
}

}  // namespace nslog
