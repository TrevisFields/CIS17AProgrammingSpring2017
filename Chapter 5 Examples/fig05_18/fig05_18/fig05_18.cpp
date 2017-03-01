  //Fig. 5.18: fig05_18.cpp
  //logical operators.
#include <iostream>
using namespace std;

int main()
{
  //create truth table for && (logical AND) operator
  cout << boolalpha << "Logical AND (&&)"
  << "\nfalse && false: " << (false && false)
  << "\nfalse && true: " << (false && true)
  << "\ntrue && false: " << (true && false)
  << "\ntrue && true: " << (true && true) << "\n\n";
  
  //create truth table for || (logical OR) operator
  cout << "Logical OR (||)"
  << "\nfalse || false: " << (false || false)
  << "\nfalse || true: " << (false || true)
  << "\ntrue || false: " << (true || false)
  << "\ntrue || true: " << (true || true) << "\n\n";
  
  //create truth table for ! (logical negation) operator
  cout << "Logical NOT (!)"
  << "\n!false: " << (!false)
  << "\ntrue: " << (!true) << endl;
}//end main

/*
 NOTES:
 
- 5.8 Logical Operators
 So far we've studied only simple conditions, such as counter <= 10, total > 1000 and number != sentinelValue.
 C++ provides logical operators that are used to form more complex conditions by combining simple conditions
 
 - Logical AND (&&) Operator
 In this case, we use the && (logical AND) operator, as follows:
 		if(gender == 1 && age >=65)
 			++seniorFemales;
 
 truth tables
 expression1		expression2			expression1 && expression2
 		false							false												false
 		false							true													false
		true								false												false
 		true								true													true
 
 - Logical OR (||) Operator
 Now let's consider the || (logical OR) operator.
 	if((semesterAverage >= 90) || finalExam >= 90))
 		cout << "Student grade is A" << endl;
 
 truth tables
 expression1		expression2		expression1 || expression2
 		false							false											false
 		false							true												true
		true								false											true
 		true								true												true
 
 - Logical Negation (!) Operator
 C++ provides the ! (logical NOT, also called logical negation) operator to "reverse" a condition'd meaning.
 	if(!(grade == sentinelValue))
 		cout << "The next grade is " << grade << endl;
 
 - Logical Operators Example
 We use stream manipulator boolalpha (a sticky manipulator) in line 9 to specify that the value of each bool expression should be displayed as either the word "true" or the word "false".
 */
