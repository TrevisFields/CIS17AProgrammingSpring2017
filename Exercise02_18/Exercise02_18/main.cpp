  //Trevis Fields
  //CIS 17A Spring 2017
  //Professor Wilson
  //Exercise 2.18

/*
  //Write a program that asks the user to enter two integers, obtains the numbers from the user
  //then prints the larger number followed by the words " is larger. "
  //If the numbers are equal, print the message " these numbers are equal."
*/
#include <iostream>
using namespace std;

  //begin executing main function
int main()
{
  //define integers
  int number1;
  int number2;
  
  //prompt the user to inter in two integers
  cout << "Please enter in two intergers." << endl;
  cout << "interger 1: ";
  cin >> number1;
  cout <<"Integer 2: " << endl;
  cin >> number2;
  
  //begining of if statements
  if(number1 > number2)
	 cout << number1 << " is larger " << endl;
  if(number2 > number1)
	 cout << number2 << " is larger " << endl;
  if(number1 == number2)
	 cout << "These numbers are equal." << endl;
}//end main function
