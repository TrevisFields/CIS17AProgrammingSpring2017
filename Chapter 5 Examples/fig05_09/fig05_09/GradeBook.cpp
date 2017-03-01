#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name)
{
  setCourseName(name);
  aCount = 0;
  bCount = 0;
  cCount = 0;
  dCount = 0;
  fCount = 0;
}

void GradeBook::setCourseName(string name)
{
  if(name.length() <= 25)
	 courseName = name;
  else
  {
	 courseName = name.substr(0,25);
	 cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
	 << "liminting courseName to first 25 characters.\n" << endl;
  }
}

string GradeBook::getCourseName()
{
  return courseName;
}

void GradeBook::displayMessage()
{
  cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
  << endl;
}

void GradeBook::inputGrades()
{
  int grade;
  
  cout << " Enter the letter grades." << endl
  << "Enter the EOF character to end input." << endl;
  
  while ((grade = cin.get()) != EOF)
	 {
		switch(grade)
		{
			 case 'A':
			 case 'a':
			 ++aCount;
			 break;
			 
			 case 'B':
			 case 'b':
			 ++bCount;
			 break;
			 
			 case 'C':
			 case 'c':
			 ++cCount;
			 break;
			 
			 case 'D':
			 case 'd':
			 ++dCount;
			 break;
			 
			 case 'F':
			 case 'f':
			 ++fCount;
			 break;
			 
			 case '\n':
			 case '\t':
			 case ' ':
			 break;
			 
			 default:
			 cout << "Incorrect letter grade entered."
			 << " Enter s new grade." << endl;
			 break;
		}
	 }
}

void GradeBook::displayGradeReport()
{
  cout << "\n\nNumber of students who received each letter grade:"
  << "\nA: " << aCount
  << "\nB: " << bCount
  << "\nC: " << cCount
  << "\nD: " << dCount
  << "\nF: " << fCount
  << endl;
}
  /*
	NOTES:
	- 5.6 switch Multiple-Selcetion Statement
	C++ provides the switch multiple-selection statement to perform many different actions based on the possible values or expression
	Each action is associated with the value of a constant integral expression
	
	- Reading Character Input
	Normally, characters are stored in variables of type char; however, characters can be stored in any integer data type, because types short, int and long are guaranteed to be at least as big as type char.
	Appendix B shows the characters and decimal equivalents from the ASCII (American Standard Code for Information Interchange) character set, which is a subset of Unicode.
	
	- switch Statemnet Details
	The switch statemtn consists of a series of case labels and an optional default case.
	This is called the controlling expression
	*/
