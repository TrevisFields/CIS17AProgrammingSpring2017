#pragma once
#include <string>


class Elements
{
private:
  std::string fire;
  std::string water;
  std::string air;
  std::string earth;
public:
  Elements();
  Elements(std::string fire, std::string water, std::string earth, std::string air);
  ~Elements();
};
