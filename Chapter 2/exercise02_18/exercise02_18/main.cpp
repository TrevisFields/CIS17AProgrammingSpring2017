#include <iostream>
using namespace std;

int main()
{
  int num1;
  int num2;
  cout << "Please enter in two integers to be compared.\n";
  cout << "Enter in the first integer.";
  cin >> num1;
  cout << "Press enter to continue.\n";
  getchar();
  cout << "Please enter in the second integer.";
  cin >> num2;
  cout << "Press enter to continue.\n";
  getchar();
  
  if(num1 > num2)
	 cout << num1 << " is larger." << endl;
  if(num2 > num1)
	 cout << num2 << " is larger." << endl;
  if(num1 == num2)
	 cout << "These numbers are equal."<< endl;
  return 0;
}
