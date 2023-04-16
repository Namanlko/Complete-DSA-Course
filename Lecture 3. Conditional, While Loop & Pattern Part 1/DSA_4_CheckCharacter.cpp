// 4) Question. Check if a charatcter is uppercase, lowercase, digit or special symbol.

#include <iostream>
using namespace std;

int main() {

  char ch;
  cout<<"Enter Character :)"<<endl;
  cin>>ch;

  if(ch >= 65 && ch<=90){
    cout<<"Uppercase Character :)"<<endl;
  }
  else if(ch >= 97 && ch<=122){
    cout<<"Lowercase Character :)"<<endl;
  }
  else if(ch >= 48 && ch<=57){
    cout<<"Character is Digit :)"<<endl;
  }
  else{
    cout<<"Character is Special Symbol :)"<<endl;
  }

  return 0;
}
