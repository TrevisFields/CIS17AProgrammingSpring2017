#include <string>
using namespace std;

class Character
{
private:
  int age;
  string name;
  string race;
  
  
public:
  
  bool SetAge(int);
  
  string Greet();
  Character(string, int);
  ~Character();
};

