#include "Circle.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Circle::Circle()
{
  radius = 25.5;
  PI= 3.14;
}

void Circle::setRadius(double r)
{
  if (r >= 0)
	 radius = r;
  else
	 {
		cout << "Radius is not a valid value.\n";
		exit(EXIT_FAILURE);
	 }
}

