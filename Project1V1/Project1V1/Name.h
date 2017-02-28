#pragma once
#include "Lifestyle.h"
#include "Gender.h"
#include "Age.h"
#include "Elements.h"

#include <string>

class Name
{
private:
  std::string _name;
public:
  Name();
  Name(std::string _name);
  ~Name();
  
  std::string getName();
};
