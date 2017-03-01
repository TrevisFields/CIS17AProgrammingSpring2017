  //Fig. 5.6: fig05_06
  //Compound interest calculations with for.
#include <iostream>
#include <iomanip>
  //Standard C++ math library
#include <cmath>
using namespace std;

int main()
{
  //amount on deposit at end of each year
  double amount;
  //inital amount before interest
  double principal = 1000.00;
  //interest rate
  double rate = .05;
  
  //display headers
  cout << "Year" << setw(21) << "Amount on deposit" << endl;
  
  //set floating-point number format
  cout << fixed << setprecision(2);
  
  //calculate amount on deposit for each of ten years
  for(int year = 1; year <= 10; ++year)
	 {
		  //calculate new amount for specified year
		amount = principal * pow(1.0 + rate, year);
		
		  //dispaly the year and the amount
		cout << setw(4) << year << setw(21) << amount << endl;
	 }//end for
}//end main

/*
 NOTES:
 - 5.4 Examples using for statement
 C++ does not include an exponentiation operator, so we use the standard library function pow
 
 * Using Stream manipulator to format Numeric Output *
 The stream manipulator setw(4) specifies that the next value output should appear in a field witdh of 4-- i.e., cout prints the value with at least 4 character positions.
 If the value to be output is less than 4 character positions wide, the value is right justified in the field by defualt.
 To indicate that vlaues should be ouput left justified, simply output nonparmeterized stream manipulator left (found in header <iostream>).
 Right justification can be restored by putputting nonparameterized stream manipulator right.
 We applied the stream manipulators fixed and setprecision to the output stream (i.e., cout) before the for loop because these format settings remain in effect until they're changed -- such settings are called sticky settings and they do not need to be applied during each iteration of the loop.
 
 */
