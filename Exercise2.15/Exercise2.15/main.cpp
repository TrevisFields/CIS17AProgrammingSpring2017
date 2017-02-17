	 //Trevis Fields
	 //CIS 17A Spring 2017
	 //Professor James Wilson
	 //Class Meetings: Monday 8:45 - 10:10
	 //                Wednesday 8:45-11:10
	 //Chapter 2 Exercise 2.16

	 //(Arithmetic) Write a program that asks the user to enter two numbers,
	 // obtains the two numbers from and prints the sum, product, difference, and quotient of the two numbers.

/*
 This program will ask the user to inmut two values and then calculate the sum, product,
 difference, and quotient of the given values from the user and  return the values to the screen.
 */

	 //Allow the program to perform input and outout
#include <iostream>
	 //program uses names from the std namespace
using namespace std;

	 //Main function
int main()
{
			//fundemental types or local variable declarations
	 int number1;
	 int number2;
	 int sum;
	 int product;
	 int difference;
	 double quotient;
	 
			//Ask user to enter two variables
	 cout << "User please enter two variables: " << endl;
	 cin >> number1 >> number2;
	 
			//calculate the sum on user defined values
	 sum = number1 + number2;
	 cout << "The sum is: " << sum << endl;
	 
			//calculate the product of user defined values
	 product = number1 * number2;
	 cout << "The product is: " << product << endl;
	
			//calculate the difference of user defined values
	 difference = number1 - number2;
	 cout <<"The difference is: " << difference << endl;
	 
			//calculate the quotient of user defined values
	 quotient = number1 / number2;
	 cout << "The quotient is: " << quotient << endl;
	 
			//return value and termination of code successfully
	 return 0;
}

/*
 Programming Notes:
 Quotient does not give a remainder for values that tend to be bigger for the second value entered by the user.
 Program may break or is incomplete for the quotient functions and may produce incorrect results.
 Program may be updated to include if statements to determine which value is bigger and then run throught the calculations to give both sets of results.
 Program can be written with fewer lines of code and may also be cleaned up more.
 Program can have more comments for users to identify errors and use more abstract ideas to break / fix errors.
 Program had a breakpoint at line 44 when using the improper form of the if statement to get a % (modulus) answer. 
 */
