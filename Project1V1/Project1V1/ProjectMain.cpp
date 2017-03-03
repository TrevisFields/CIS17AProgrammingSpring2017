#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
using namespace std;

int main()
{
  Rectangle box;
  
  cout << "the Width of a rectangle is " << box.getWidth() << endl;
  cout << "The length of the same rectangle is " << box.getLength() << endl;
  cout << "To get the area of the rectangle we will use (W * L)  to get the area." << endl;
  cout << "The area of the rectangle is " << box.getArea() << endl;

  cout << "Press enter to continue." << endl;
  getchar();
  
  Triangle triBox;
  
  cout << "The height of the triangle is " << triBox.getHypo() << endl;
  cout << "The base of the triangle is " << triBox.getBase() << endl;
  cout << "To get the area of the triangle we will use (B * H) / 2." << endl;
  cout << "Therefore the area of the triangle is " << triBox.getArea() << endl;
  
  cout << "Press enter to continue." << endl;
  getchar();
  
  Circle circle;
  
  cout << "The radius of a circle is " << circle.getRadius() << endl;
  cout << "The get the area of a circle we will use (Pi * R * R) or (Pi * D) " << endl;
  cout << "The area of a circle is " << circle.getArea() << endl;
  
  cout << "Press enter to continue." << endl;
  getchar();
  
  Cylinder cup;
  cout << "The radius of a cylinder is " << cup.getRadius() << endl;
  cout << "The heigth of a cylinder is " << cup.getHeigth() << endl;
  cout << "To get the area of a cylinder we use ((2 * PI * H * R) + (2 * Pi * R * R))" << endl;
  cout << "The area of a cylinder is " << cup.getArea() << endl;
  
  
  
}
