/**
 Author Steve Snelson
 Date  04/06/14

 Print out and integer from a var using typedef
 */

#include <iostream>
using namespace std;

int main()
{
  //feet become a type of int, then assign distance of type feet.
  typedef int feet;
  feet distance;

  //Collect data fromt he user and have it inputted into distance var
  cout << "Please end a distance in feet in whole numbers : ";
  cin >> distance;
  
  //output the inputted data
  cout << endl << endl << "You enter a distance of " << distance << endl;
  return 0;
}
