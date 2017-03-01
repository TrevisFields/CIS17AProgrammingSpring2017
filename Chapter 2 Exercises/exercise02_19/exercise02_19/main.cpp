#include <iostream>
using namespace std;

int main()
{
  int num1;
  int num2;
  int num3;
  
  int sum;
  int avg;
  int product;
  
  cout << "Input three different intergers: \n";
  cin >> num1;
  cout << "Press enter.\n";
  getchar();
  cin >> num2;
  cout << "press enter.\n";
  getchar();
  cin >> num3;
  cout << "press enter.\n";
  getchar();
  
  if(num1 > num2 && num1 > num3)
	 cout << "Largest is " << num1 << endl;
  if (num2 > num1 && num2 > num3)
	 cout << "Largest is " << num2 << endl;
  if(num3 > num1 && num3 > num2)
	 cout << "Largest is " << num3 << endl;
  if(num1 < num2 && num1 < num3)
	 cout << "Smallest is "<< num1 << endl;
  if(num2 < num1 && num2 < num3)
	 cout << "Smallest is " << num2 << endl;
  if (num3 << num1 && num3 < num2)
	 cout << "Smallest is " <<num3 << endl;
  
  sum = num1 + num2 + num3;
  avg = (num1 + num2 + num3) / 3;
  product = (num1 * num2 * num3);
  
  cout << "Sum is: " << sum << endl;
  cout <<"Average is: " << avg << endl;
  cout << "Product is: " << product << endl;
  
  return 0;
}
