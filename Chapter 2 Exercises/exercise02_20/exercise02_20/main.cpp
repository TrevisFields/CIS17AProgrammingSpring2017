#include <iostream>
using namespace std;

int main()
{
  const double PI = 3.14159;
  int radius;
  int circumfrence;
  int diameter;
  int area;
  
  cout << "Please enter in the radius of the circle you would like to know information for." << endl;
  cin >> radius;
  diameter = radius * 2;
  cout << "The diameter is " << diameter << endl;
  circumfrence = 2 * PI  * radius;
  cout << "The circumfrence of this circle is " << circumfrence << endl;
  area = PI * radius * radius;
  cout << "The area of this circle is " << area << endl;
  getchar();
  cout << "Thank you for using the program, press enter to end the program." << endl;
  getchar();
}
