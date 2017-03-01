  //Fig. 4.10: fig04_10.cpp
  //Crearte GradeBook object and invoke its determineClassAverage function.
#include "GradeBook.h"//include defintion of class GradeBook

int main()
{
  //create GradeBook object myGradeBook and
  //pass course name to constructor
  GradeBook myGradeBook("CS101 C++ Programming");
  
  myGradeBook.displayMessage();//display welcome message
  myGradeBook.determineClassAverage();//find average of 10 grades
}//end main
