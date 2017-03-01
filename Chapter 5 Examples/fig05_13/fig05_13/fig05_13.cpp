  //Fig. 5.13: fig05_13.cpp
  //break statement exiting a for statement.
#include <iostream>
using namespace std;

int main()
{
  //control variable also used after loop terminates
  int count;
  
  //loop 10 times
  for(count = 1; count <= 10; count++)
	 {
		if(count == 5)
		  //break loop only if count is 5
		  break;
		
		cout << count << " ";
	 }//end for
  cout << "\nBroke out of loop at count = " << count << endl;
}//end main

/*
 NOTES:
 - 5.7 break and continue Statements
 The break statment, when executed in a while, for, do...while or switch statment, causes immediate exit from that statement.
 
 -contine Statement
 The continue statement, when executed in a while,for or do...while statement, skips the remaining statements in the body of the statement and proceeds with the next iteration of the loop.
 */
