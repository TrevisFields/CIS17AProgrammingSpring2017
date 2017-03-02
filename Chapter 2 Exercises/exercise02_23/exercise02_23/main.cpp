#include <iostream>
using namespace std;

int main()
{
  int number1;
  int number2;
  int number3;
  int number4;
  int number5;
  
  
  
  cout << "Please enter in the first number." << endl;
  cin >> number1;
  cout << "Please enter in the second number." << endl;
  cin >> number2;
  cout << "Please enter in the third number." << endl;
  cin >> number3;
  cout << "Please enter in the fourth number." << endl;
  cin >> number4;
  cout << "Please enter in the fifth number." << endl;
  cin >> number5;
  cout << "Press enter to continue." << endl;
  getchar();
  
  
  //begining of if statements to print the smallest number
  if(number1 < number2 && number1 < number3 && number1 < number4 && number1 < number5)
	 {
	 cout <<"The smallest: " << number1 << endl;
	 }
  else if (number2 < number1 && number2 < number3 && number2 < number4 && number2 < number5)
	 {
		cout <<"The smallest: " << number2 << endl;
	 }
  else if (number3 < number1 && number3 < number2 && number3 < number4 && number3 < number5)
	 {
	 cout <<"The smallest: " << number3 << endl;
	 }
  else if (number4 < number1 && number4 < number2 && number4 < number3 && number4 < number5)
	 {
	 cout <<"The smallest: " << number4 << endl;
	 }
  else if (number5 < number1 && number5 < number2 && number5 < number3 && number5 < number4)
	 {
	 cout <<"The smallest: " << number5 << endl;
	 }//end of if statements for smallest value
  
  //begining of if statements to print the largest value
  if(number1 >number2 && number1 > number3 && number1 > number4 && number1 > number5)
	 {
	 cout <<"The largest: " << number1 << endl;
	 }
  else if (number2 > number1 && number2 > number3 && number2 > number4 && number2 > number5)
	 {
		cout <<"The largest: " << number2 << endl;
	 }
  else if (number3 > number1 && number3 > number2 && number3 > number4 && number3 > number5)
	 {
	 cout <<"The largest: " << number3 << endl;
	 }
  else if (number4 > number1 && number4 > number2 && number4 > number3 && number4 > number5)
	 {
	 cout <<"The largest: " << number4 << endl;
	 }
  else if (number5 > number1 && number5 > number2 && number5 > number3 && number5 > number4)
	 {
	 cout <<"The largest: " << number5 << endl;
		}//end of if statements for the largest value


	 
}
