
#include <iostream>
using namespace std;

int SimpleArray();

int main()
{
  int Test=0; 
  Test = SimpleArray();
  return 0;
}

int SimpleArray()
{
/**
 
 \brief Write and application to take 10 school exam marks within and array
once complete as the the user if they want to print them to screen.

 \details Initialise array of 10 Int, Ask the user to input in the marks, Completing all the marks the user confirms they want them printing to screen. User to press a key to end the program.
 
 \return nothing
 
 \author Steve Snelson
 
 \date 09/06/2014
 
 */

  const int MAX_MARKS = 5; //constant which is the max marks
  int aiMarks[MAX_MARKS]; // array of 10 integers
  int iCounter;  //Count to cycle through the arrays
  char cToScreen; //Flag to see if the user wants to print to screen

  //Ask user to input in 10 marks
  cout << "Please input " << MAX_MARKS << " exam marks" << endl;
  for (iCounter =0; iCounter < MAX_MARKS; iCounter++)
    {
      cout << "Enter mark number " << iCounter << " : ";
      cin >> aiMarks[iCounter];
      cout << endl;
    }

  //Ask user if they wanf the marks written out to screen
  cout << "You have now entered in your marks would you like to see them on screen"<< endl;
  cout << "Please press y for yes and n to exit program : ";
  cin >> cToScreen;
  cout << endl;

  //Print marks to screen
  if (cToScreen == 'y')
    {
    cout << endl;
      cout << "THE OUTPUT OF YOU MARKS" << endl;
      for (iCounter = 0; iCounter < MAX_MARKS; iCounter++)
	{
	  cout << "Mark " << iCounter << " "  <<aiMarks[iCounter] << endl;
	}
    }
  else
    {
      return 0; // exit program if user say no to printing to screen
    }
  return 0;
}
