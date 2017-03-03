#include "Triangle.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Triangle::Triangle()
{
  hypo = 25.5;
  base = 32.4;
}

void Triangle::setHypo(double h)
{
  if (h >= 0)
	 hypo = h;
  else
	 {
		cout << "Hypotneus is not a valid value.\n";
		exit(EXIT_FAILURE);
	 }
}

void Triangle::setBase(double b)
{
  if(base >= 0)
	 base = b;
  else
	 {
		cout << "Base is not a valid value.\n";
		exit(EXIT_FAILURE);
	 }
}
