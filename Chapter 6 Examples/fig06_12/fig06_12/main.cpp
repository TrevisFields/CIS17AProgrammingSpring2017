  //Fig 6.12; fig06_12.cpp
  //Scoping example.
#include <iostream>
using namespace std;

void useLocal();
void useStaticLocal();
void useGlobal();

int x = 1;

int main()
{
  cout << "global x in main is " << endl;
  
  int x = 5 ;
  
  cout << "Local x in main's outer scpoe is " << x << endl;
  
  {
	 int x = 7;
	 
	 cout << "local s in main's inner scope is " << x << endl;
  }
  
  cout << "local x in main's outer scope is " << x << endl;
  
  useLocal();
  useStaticLocal();
  useGlobal();
  useLocal();
  useStaticLocal();
  useGlobal();
  
  cout << "\nLocal x in main is " << x << endl;
}

void useLocal()
{
  
  int x = 25;
  
  cout << "\nLocal x is " <<  x << " on entering useLocal" << endl;
  ++x;
  cout <<  "local x is " << x << " on exiting useLocal" << endl;
}

void useStaticLocal()
{
  static int x = 50;
  
  cout << "\nLocal static x is " << x << " on entering useStaticLocal" << endl;
  ++x;
  cout << "local static x is " << x << " on exiting useStatic Local" << endl;
}

void useGlobal()
{
  cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
  x *= 10;
  cout << "global x is " << x << " on exiting useGlobal" << endl;
}
