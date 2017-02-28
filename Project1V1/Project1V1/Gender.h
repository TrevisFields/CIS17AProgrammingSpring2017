#pragma once
#include <string>

class Gender
{
private:
  std::string male;
  std::string female;
  
public:
  std::string getGender();
  std::string getGender(std::string male, std::string female);
  Gender();
};
