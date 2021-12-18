#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

namespace ssl{
  const std::string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  const std::string abc = "abcdefghijklmnopqrstuvwxyz";
  const std::string nums = "1234567890";
  const std::string specials = "`~!@#$%^&*()-_=+[{]}\\|;:\'\",<.>/\?";
  const std::string shaded = "`.,\'\"^*:;-~_=+!|<>\\/()[]{}?#%$&@";
  const char newl = '\n';

  int zero(){
    return 0;
  };

  void printc(std::string str = "", std::string end = "\n", std::ostream &stream = std::cout){
    stream << str << end;
  };

  double input(std::string p){double x;printc(p,"");std::cin>>x;printc();return x;};

  std::string strvec(std::vector<long double> &v){
    std::string s = "{";
    for (unsigned short i = 0; i < v.size() - 1; i++){
      s += std::to_string( v.at(i) ) + ", ";
    };
    s += std::to_string( v.at(v.size() - 1) ) + "}";
    return s;
  };

  std::string multStr(std::string str, unsigned int times){
    std::string tmpstr;
    for (unsigned short i = 0; i < times; i++){
      tmpstr += str;
    };
    return tmpstr;
  };

  void initrandom(){
    srand(time(NULL));
  };

  int randnum(int min = 0, int max = 1){
    return rand() % (max - min + 1) + min;
  };
};
