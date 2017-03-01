#pragma once
#include <string>
#include <iostream>
using namespace std;

class Hour
{
public:
  Hour(string);
  void setHourChoice(string);
  string getHourChoice();
  void displayMessage();
  
private:
  string hour;
  int dayTime;
  int nightTime;
};
