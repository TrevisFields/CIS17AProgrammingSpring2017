#include "Character.h"

bool Character::SetAge(int iAge)
{
  if (iAge<1)
  {
	return false;
  }
  age = iAge;
}
string Character::Greet()
{
  return "Hi! My name is " + name + " and i am " +  to_string(age) + " years old!" << endl;
}
Character::Character(string iName, int iAge) :name(iName)
{
  name = iName;
  age = iAge;
  
}

Character::Character(string iName, int iAge, string iRace)
{
  Character(iName, iAge);
  race = iRace;
  
}

Character::~Character()
{
}
