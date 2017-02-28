#include <iostream>
using namespace std;

int main()
{
  int num1;
  int num2;
  int sum;
  int product;
  int diff;
  int quot;
  
  cout << "For the time being Please enter the larger integer in first." << endl;
  cout << "Please enter the first integer: ";
  cin >> num1;
  cout << "Press enter to continue\n";
  getchar();
  cout << "Please enter in the second interger: ";
  cin >> num2;
  cout << "Press enter to continue\n";
  getchar();
  sum = num1 + num2;
  diff = num1 - num2;
  product = num1 * num2;
  
  if(num2 >= num1)
  quot = num2 / num1;
  else if(num1 >= num2)
	 quot = num1 / num2;
  
  cout << "The sum is: " << sum << endl;
  cout << "The product is: " << product << endl;
  cout << "The differecne is: " << diff << endl;
  cout << "The quotient is: " << quot << endl;
  
  
  return 0;
}
