#include <iostream>
#include <string>
using namespace std;
int main () {
  string firstName = "Showrin ";
  string lastName = "Rahman";
  string fullName = firstName + lastName;
  cout<<"\nChange String Characters";
  cout << fullName;
  fullName[0] = 'N';
  cout << fullName;
  cout<<"\nLength: ";
  cout<<fullName.length();
  cout<<"\nAccesing 0 number index of string: ";
  cout << fullName[0];
  cout<<"\nSize: ";
  cout<<fullName.size();
  string x = "\n20";
  string y = "01";
  string z = x + y;
  cout << z;
  return 0;
}
