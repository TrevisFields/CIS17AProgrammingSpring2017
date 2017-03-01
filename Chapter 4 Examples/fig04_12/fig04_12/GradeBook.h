  //Fig. 4.12: GradeBook.h
  //Definition of class GradeBook that determines a class average.
  //Memebr functions are defined in GradeBook.cpp
#include <string>//program uses C++ standard class
using namespace std;

  //GradeBook class definition
class GradeBook
{
public:
  GradeBook(string);//constructor initializes course name
  void setCourseName(string);//function to set the course name
  string getCourseName();//function to retrive the course name
  void displayMessage();//display a welcome message
  void determineClassAverage();//average grades entered by the user
  
private:
  string courseName;//course name for this GradeBook
};//end class GradeBook
