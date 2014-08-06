/**
   Author Steve Snelson
   Date 04/06/14

Demo use of Enumerated Types using color. Output to be based on positin of data in the list.
 */

#include <iostream>
using namespace std;

int main()
{
  //Set up the enumerated list 
  enum colour {red, green, blue} c;
  //Set initial value.
  c = green;

  //Output all the informration.
  cout << endl << " The coded output : "<< c << endl;
  return 0;
}
