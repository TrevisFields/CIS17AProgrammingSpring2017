#include <iostream>
#include "ElementBender.h"
using namespace std;


int main()
{
	 //Main function begining
  int choice = - 1;
  while(choice != 0)
  {
	 cout << "CHOOSE AN OPTION" << endl;
	 cout << "1) Select your element." << endl;
	 cout << "2) Randomly Select an element for you." << endl;
	 cout << "0) Close the program." << endl;
	 cout << "PLEASE ENTER CHOICE AND PRESS ENTER UNTIL MORE TEXT COMES TO THE SCREEN." << endl;
	 //user enters in choice
	 cin >> choice;
	 system("clear");
  //used to clear the screen on a Macbook Pro and iMac by creating a lot of empty space on the Xcode debugger.
	 int i = 0;
	 for(i = 0; i <= 1000; i++)
		{
		  cout << " " << endl;
		  i++;
		}
	 cin.get();
  system("cls");
	 
	 switch(choice)
	 {
	 case 1:
		  cout << "You may select one of the four elements to begin your journey or press 0 to exit the program." << endl;
		  while (choice != 0)
	 {
		cout << "The elements are:\n1) FIRE\n2) WATER\n3) EARTH\n4) AIR\n0)CLOSE PROGRAM" << endl;
		  //user enters in choice
		cin >> choice;
		system("clear");
		  //used to clear the screen on a Macbook Pro and iMac by creating a lot of empty space on the Xcode debugger.
		int i = 0;
	 for(i = 0; i <= 1000; i++)
		{
		  cout << " " << endl;
		  i++;
		}
	 cin.get();
		system("cls");

		  /*MAKE A SELECTION OF HOW TO LIVE A LIFE UNDER ONE OF THE FOUR ELEMENTS
			NOMAD (MONK)- STRONG CONNECTION WITH ELEMENT(S) AND THE ABILITY TO USE VAST AMOUNTS OF FOCUS
			VILLIAGER- STRONG WILL TO PROTECT OTHERS (FAMILY AND CLOSE FRIENDS AND HAS A STRONG WILL TO PROTECT OTHERS
			CITY DEWELLER - WEAK ELEMENT SKILLS BUT STRONG ABILITY TO MASTER NEW MOVES
			SOILDER - STRONG ABLITY TO LEARN NEW MOVES, WILLING TO DIE FOR THE BELIEF, ALSO STRONG STAMINA TO FIGHT
			*/
		switch(choice)
		{
		  case 1:
			 cout << "You have choosen the FIRE NATION." << endl;
		  break;
			 
		  case 2:
			 cout << "You have choosen the WATER TRIBE." << endl;
		  break;
			 
		  case 3:
			 cout << "You have choosen the EARTH KINGDOM." << endl;
		  break;
			 
		  case 4:
			 cout << "You have choose to be an AIR TEMPLE." << endl;
			 break;
			 
			 case 0:
			 cout << "YOU HAVE CHOOSEN TO CLOSE THE PROGRAM. THANK YOU FOR YOUR TIME." << endl;
			 break;
			 
			 default:
			 cout << "INVLAID CHOICE PLEASE TRY AGAIN." << endl;
		}
		
		  /*CREATE THE CODE TO SELECT THE TYPE OF PERSON YOU WILL BE AND THEN DISPLAY ALL THE SELCETIONS BACK TO THE USER WITH THE OPTION TO CHANGE DIFERENT PARTS OF THE SELCETINS.
			
			LATER ASSIGN NEW SKILLS AND ABILITIES TO EACH OF THE ELEMENTS IN HEADER AND CPP FILES TO LESSEN THE AMOUNT OF CODE PLACED IN THE MAIN CODE FILE AS WELL AS THE SWITCH STATEMENTS AND OTHER CODE NEEDED.*/
		while (choice != 0)
		{
		  cout << "Now please choose what type of person you will become." << endl;
		  cout << "1) NOMAD" << endl;
		  cout << "2) VILLIAGER" << endl;
		  cout << "3) CITY DWELLER" << endl;
		  cout << "4) SOILDER" << endl;
		  cin >> choice;
		  
		switch(choice)
		{
			 case 1:
		cout << "1) You can be a NOMAD ( A person who seeks balance and to become one with the element." << endl;
			 break;
			 case 2:
		cout << "2) You can be a VILLIAGER ( A person not strong with the element on a physical level but able to call apon some extra needed strength when protecting others." << endl;
			 break;
			 case 3:
		cout << "3) You can be a CITY DWELLER ( A person who is a quick learner of new skills for thier element." << endl;
			 break;
			 case 4:
		cout << "4) You can be a SOILDER ( A person who can fight for long stints of time as well as learn new skills for the element." << endl;
			 break;
			 
			 default:
			 cout << "PLEASE SELECT FROM ONE OF THE FOLLOWING TYPES." << endl;
			 break;
		}
	 }
		}
		  break;
		case 2:
		  cout << "The element that was selected for you is: \n" << endl;
		  /*
			RANDOM BLOCK OF CODE TO SELECT A RANDOM ELEMENT FOR THE USER TO BEGIN THIER STORY WITH OUT HAVING TO SELECT FROM THE FOUR ELEMENTS.
			
			GIVE SOME BACKGROUND ON EACH OF THE ELEMENTS SO THE USER IS MORE LIKELY TO PICK THE ELEMENT HE/SHE WOULD LIKE TO USE FOR THE REMAINDER OF THE STORY.
			*/
		  break;
		case 0:
		  cout << "YOU HAVE SELECTED TO CLOSE THE PROGRAM. THANK YOU AND COME BACK SOON." << endl;
		  break;
		default:
		  cout << "INVALID CHOICE PLEASE TRY AGAIN." << endl;
		  break;
	 }
  }
  cin.get();
  
  
  
    return 0;
	 //Main function ending
}
