#include <iostream>
using namespace std;

int main()
{
  int number1;
  
	 	cout << "Please enter in a number to test if it is even or odd." << endl;
  		cout << "(Press enter to continue.)" << endl;
  
  do
  {
	 cin >> number1;
  if(number1 % 2 == 0)
	 {
		cout << number1 << " is even " << endl;
	 }
  else{
	 cout << number1 << " is odd." << endl;
  }
	 }while (cin.get() != EOF);
}
