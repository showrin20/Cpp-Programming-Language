#include <iostream>

using namespace std;

int main(){
int age = 21;
if (age > 20) {
  cout << "Both Can Marry\n";
} else if (age>=18 && age<21 ) {
  cout << "Girls Can marry but boys can't\n";
} else {
  cout << "Both Can't Marry\n";
}
//Ternary Operator
string result = (age < 18) ? "less age" : "Good age.\n";
cout << result;
//switch

switch (age){
  case 6:
    cout << "This is 6";
    break;
  case 7:
    cout << "This is 7";
    break;
  default:
    cout << "Right age marriage";
}
}
