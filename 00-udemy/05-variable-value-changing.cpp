#include <iostream>
using namespace std;
int main()
{
  int A = 4;
  cout << A << endl; //for end-line
  cout << &A << endl;

  int A = 10;
  cout << A << endl;
  cout << &A << endl;

  //Now the value of A will change as we go from abvove to bottom of the file.
  //However, redefinition is not allowed so this will end in an error.
}
