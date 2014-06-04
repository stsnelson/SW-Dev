/** 
 Author Steve Snelson
 Date   04 June 2014

 Print out the size a of a list of data types to the screen 
*/

#include <iostream>
using namespace std;

int main()
{
  cout << endl; //start output from a new line
  //output the size of eac of the following datatypes
  cout << "Size of Char : " << sizeof(char) << endl;
  cout << "Size of Int  : " << sizeof(int) << endl;
  cout << "Size of short int : " << sizeof(short int) << endl;
  cout << "Size of float : " << sizeof(float) << endl;
  // return a value to complete the main function.
  return 0;
}
