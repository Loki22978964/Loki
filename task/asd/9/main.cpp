#include <iostream>
#define DEBUG
#ifdef DEBUG
  #define LOGD(message)\
   std::cout << message << std::endl
#else
   #define LOGD
#endif
#define LOGE(message)\
std::cerr << message << std::endl



int main()
{
LOGD("This is a cout message.");
LOGE("This is a cerr message.");
return 0;
}
