#include "Rectangle.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Rectangle::Rectangle()
{
  width = 10.0;
  length = 20.0;
}

void Rectangle::setWidth(double w)
{
  if (w >= 0)
	 width = w;
  else
	 {
		cout << "Width is not a valid value.\n";
		exit(EXIT_FAILURE);
	 }
}

void Rectangle::setLength(double len)
{
  if(len >= 0)
	 length = len;
  else
	 {
		cout << "Length is not a valid value.\n";
		exit(EXIT_FAILURE);
	 }
}
