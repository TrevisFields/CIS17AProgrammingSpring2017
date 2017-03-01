  /*
	Chapter 2 A quick overview of the different styles of writing a program in C++ on Xcode (Using a Mac).
	topics covered:
	- 2.2 writing your first C++ program
	- 2.3 Modifiying your first C++ program
	- 2.4 Adding integers
	- 2.7 Decision Making
	
	*/
  //allows the program to output data to the screen
#include <iostream> //preprocessor directive

  //program uses cout
using std:: cout;
  //program uses cin
using std:: cin;
  //program uses endl
using std:: endl;


  //functon main begins program execution
int main() //function main

  //begining of block of code
{
  //display messaage
  std:: cout << "Welcome to C++!!!\n"; //(2.2) preforms an action to print the string 'Welcome to C++'
  //(2.3) printing a line of text with mulitiple statements
  std:: cout << "This";
  std:: cout << " is the first of many programs you will write in C++!\n";
  
  //(2.3) printing mulitple lines of text with a single statement
  std:: cout << "C++\nCan\nBe\nFun!\n";
  
  //(2.4) variable declaratons
  //variable(s)
  int number1;//first integer to add
  int number2;//second intergert to add
  int sum;//sum of number1 and number2
  
  //prompt user for data
  std::cout << "Enter first interger: ";
	 //read first integer from user into number1
  std::cin >> number1;
  std:: cout << "Please press a key to continue.\n";
  getchar();
  //read second integer from user into number2
  std:: cout << "Enter second integer: ";
  //read second integer from user input into number2
  std:: cin >> number2;
  std:: cout << "Press enter to get the sum.\n";
  getchar();
  
  //add the numbers; store the result in sum
  sum = number1 + number2;
	 //display sum; end line
  std:: cout << "Sum is " << sum << std::endl;
  
	 
	 //prompt the user for two integers
  cout << "Enter two integers to compare: \n";
  cout << "Press enter to continue.\n";
  getchar();
  cout << "Enter the first integer.\n";
  //using an if statement to make choices
  int num1;
  int num2;
  
  //read two integers from the user
  cin >> num1 >> num2;
  
  //if statements
  if(num1 == num2)
	 cout << num1 << " == " << num2 << endl;
  if(num1 != num2)
	 cout << num1 << " != " << num2 << endl;
  if(num1 < num2)
	 cout << num1 << " < " << num2 << endl;
  if(num1 > num2)
	 cout << num1 << " > " << num2 << endl;
  if(num1 <= num2)
	 cout << num1 << " <= " << num2 << endl;
  if(num1 >= num2)
	 cout << num1 << " >= " << num2 << endl;
  
  //indacate that the program executed successfully
  return 0;
  //end of program main
}

  /* Notes:
	- 2.5 Memory Concepts
	variable names such as number1, number2, num1, num2 and sum correspond to locations in the computers memory. Every variable has a name, a type, a size, and a value.
	Values stored in number1, number2, num1, etc. will appear exactly as they would before a calculation. therefore these values are used but not destroyed, so when a value is read out from a memory location the process is nondestructive.
	
	- 2.6 Arithmetic
	most programs can perform arithmetic calculations. 
	(Arithmetic operators)
		Addition (+)
		Subtraction (-)
		Multiplication (*) the asterisk indicates multiplication
		Division (/)
		Modulus (%) percent sign is the modulus operator and yields the remainder after integer division
	Arithmetic is performed in straight- line form and follows rules of operator precedence which is the same as that in algebra.
	
	- 2.7 Decision Making: Equality and Relational Operators
	the if statement allows a program to take alternative action based on whether a condition is true or false.
	if statements can be formed by using relational operators and equality operators
		Relational Operators
	(>) greater than
	(<) less than
	(>=) greater than or equal to
	(<=) less than or equal to
		Equality Operators
	(==) is equal to
	(!=) is not equal to
	
	NOTE: in later programs to reduce the amount of time in writing programs the user can use the directive ' using namespace std' to ease the process of coding. this enables a program to use all the names in any standard C++ header.
	
	*/
