#include <iostream>
using namespace std;

class GradeBook
{
public:
  GradeBook( string ); //constructor that initializes courseName
  
  void setCourseName( string ); //function that sets the course name
  string getCourseName(); //function that gets the course name
  void displayMessage(); //function that displays a welcome message
private:
  string courseName; //course name for this GradeBook
  
}; //end class GradeBook

class InstructorName
{
public:
  InstructorName ( string );
  void setInstructorName( string );
  string getInstructorName();
  void displayMessage();
private:
  string instructorName;
};
