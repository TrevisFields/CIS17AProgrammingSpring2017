	 //Trevis Fields
	 //CIS 17A Spring 2017
	 //Professor James Wilson
	 //Class Meetings: Monday 8:45 - 10:10
	 //                Wednesday 8:45-11:10
	 //Chapter 2 Exercise 2.16

	 //(Printing) Write a program that prints the numbers 1 to 4 on the same line with each pair of
	 // adjacent numbers seperated by one space. Do this several ways:
	 // a) Using one statement with one stream insertation operator.
	 // b) Using one statement with four stream inseraton operators.
	 // c) Using four statements.

	 //This program demonstrates the use of system outout using 3 statements to show to the screen.

	 //Allows the program to perform input/output
#include <iostream>

	 //Porgrams uses names from std namespace.
using namespace std;

	 //Main function
int main()
{
	 int number1 = 1;
	 int number2 = 2;
	 int number3 = 3;
	 int number4 = 4;
	 
	 
	 //Part A using one statement with one insertion operator
	 //NOTE: stream insertion operator (Out) is <<
	 //NOTE: stream insertion operator (In) is >>
	 
  //for loop
	 for (int i = 1;i < 5 ; i++)
	 {
		cout << i;
	 }
  cout << endl;
  
	 //Part B using one statement with four stream insertion operators.
	 
	 //for loop
  for (int number1; number1 < 5; number1++)
	 {cout << number1  << "\t";
		}
  cout << endl;
  
	 //Part C using four statements.
	 cout << number1 << "\t";
	 cout << number2 << "\t";
	 cout << number3 << "\t";
	 cout << number4 << "\n";

	 return 0;
}
	 /*
		Programmer Notes: 
		Part A: needs to be written in one single statement with one stream insertion operator.
		(code tired) cout << number1; number2; number3; number4\n;
			cout << number1;"\t"; number2; "\t"; number3;"t"; number4;"\n";
		Part B: has 5 insertion operators in it
	  	Part C: Is complete
	  
	  Thoughts:
	  Part A use: 
	  string PartA::A()
	  {
	  return number1 + "\t" + number2 + "\t" + number3 + \t" + number4 + "\n";
	  }
	  using a for loop for Part A:
	  */

  //Look for a way to make Part A use only one stream insertion operator
