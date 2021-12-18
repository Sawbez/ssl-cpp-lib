#ifndef SSL
#define SSL

#include <vector>
#include <ctime>
#include <cstdlib>

namespace ssl{

  const std::string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  const std::string abc = "abcdefghijklmnopqrstuvwxyz";
  const std::string nums = "1234567890";
  const std::string specials = "`~!@#$%^&*()-_=+[{]}\\|;:\'\",<.>/?";
  const std::string shaded = "`.,\'\"^*:;-~_=+!|<>\\/()[]{}?#%$&@";
  const char newl = '\n';

  int zero();

  void printc(std::string str = "", std::string end = "\n", std::ostream &stream = std::cout);

  std::string strvec(std::vector<long double> &v);

  void initrandom();
  
  std::string multStr(std::string str, unsigned int times)
  
  int randnum(int min = 0, int max = 1);
  
};
#endif
