#include "Cylinder.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Cylinder::Cylinder()
{
  radius = 25.5;
  PI= 3.14;
  heigth = 15.0;
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
		heigth = d;
	 else
	 {
		cout << "Heigth is not a valid value.\n"
		exit(EXIT_FAILURE);
	 }
  }
}

