  //Fig. 6.3: GradeBook.h
  //Definition of class GradeBook that finds the maximum of three grades.
  //Member functions are defined in GradeBook.cpp
#include <string>//program uses C++ standard string class
using namespace std;

  //GradeBook class definiton
class GradeBook
{
public:
  GradeBook(string);//constructor initializes course name
  void setCourseName(string);//function to set the course name
  string getCourseName();//function to retrive the course name
  void displayMessage();//display a welcome message
  void inputGrades();//input three grades from the user
  void displayMessageGradeReport();//display a report based on te grades
  int maximum(int, int, int);//determine max of 3 values
private:
  string courseName;//course name for this GradeBook
  int maximumGrade;//maximum of three grades
};//end class GradeBook
