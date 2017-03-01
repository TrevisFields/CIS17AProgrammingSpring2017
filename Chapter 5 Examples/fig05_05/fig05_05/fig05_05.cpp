  //Fig.5.5; fig05_05.cpp
  //Summing integers with the for statement.
#include <iostream>
using namespace std;

int main()
{
  //initialize total
  int total = 0;
  
  //total even integers from 2 through 20
  for(int number = 2; number <= 20; number += 2)
	 total += number;
  
  //display results
  cout << "Sum is " << total << endl;
}//end main
