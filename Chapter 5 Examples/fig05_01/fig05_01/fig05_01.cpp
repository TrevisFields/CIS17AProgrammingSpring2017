  //Fig. 5.1: fig05_01.cpp
  //Counter-controlled repetition.
#include <iostream>
using namespace std;

int main()
{
  //declare and initialize control variable
  int counter = 1;
  
  //loop-continuation condition
  while(counter <= 10)
	 {
		cout  << counter  << " ";
		  //increment control variable by 1
		++counter;
	 }//end while
  
  //output a newline
}//end main

/*
 NOTES:
 - 5.2 name of a control variable (or loop counter)
					initial value of the control variable
 					loop-continuation condition that tests for the final value of the control variable (i.e., wheter looping should continue)
 					increment (or decrement) by which the control variable is modified each time through the loop
 
 In C++, it's more precise to call a declaration that also reserves memory a definition.
 */
