  //https://git-scm.com
  //-all default options

  //main.cpp
#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

int main()
{
  auto Finn = Character("Finn", 14);
  auto Jake = Character("Jake", 28);
  auto Marceline = Character("Marceline",100,"Vampire")
  
  
  
  cout << Finn.Greet() << endl;
  cout << Jake.Greet() << endl;
  
  
  getchar();
  return 0;
}

  //url slides.com/jamestwilson

/*
 Project 1 - Part 1
-four classes
-private memebers
-public Memebers
-Accessors/Mutators
-show when destructor is called
-multiple constructors
-updated UML diagram
Extra credit(1pt) - do it in multiple git commits
*/
