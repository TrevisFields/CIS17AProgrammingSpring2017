#include "Cylinder.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Cylinder::Cylinder()
{
  radius = 25.5;
  PI= 3.14;
  distance = 15.0;
}

void Cylinder::setRadius(double r)
{
  if (r >= 0)
	 radius = r;
  else
	 {
		cout << "Radius is not a valid value.\n";
		exit(EXIT_FAILURE);
	 }
  
  void Cylinder::setDistance(double d)
  {
	 if (d >= 0)
		distane = d;
	 else
	 {
		cout << "Heigth is not a valid value.\n"
		exit(EXIT_FAILURE);
	 }
  }
}
  //got help at mvc to create this program
  //original program idea ecaped me and had to come up with something a lot simplier than the one i had in mind.
  //goal is to make use of the concepts from this class and si sessions to create the program i had in mind and continue with the goals and out comes of this course.

