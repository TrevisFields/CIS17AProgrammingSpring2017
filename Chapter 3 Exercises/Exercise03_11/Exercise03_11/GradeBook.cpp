/*
 (Modifying Class GradeBook) Modify class gradeBook (figs 3.11-3.12) as follows:
 a)Include a second string data member that represents the course instructor's name.
 b)Provide a set function to change the instructor's name and a get function to retrieve it.
 c)Modify the constructor to sepcify course name and instructor name parameters.
 d)Modify function displaymessage to output the welcome message and course name,
 	then the string "This course is presented by: " follwed by the instructor's name.
 using your modified class in a test program that demonstrates the class's new capablities
 */

#include <iostream>
#include "GradeBook.h"
using namespace std;

  //constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name )
{
  setCourseName( name ); //call set function to initalize courseName
  setInstructorName( name );
} //end GradeBook constructor

  //function to set the course name
void GradeBook::setCourseName( string name )
{
  courseName = name; //store the course name in the object
  instructorName = name;
}//end function setCourseName

  //function to get the course name
string GradeBook::getCourseName()
{
  return courseName; // return object's coursename
  return instructorName;
} // end function getCourseName

  //display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
  //call getCourseName to get the courseName
  cout << "Welcome to the grade book for\n" << getCourseName()
  << "!" << "this class is presented by: "<< getInstructorName() << endl;
} //end function displayMessage
