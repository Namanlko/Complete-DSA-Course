// 1) Conditionals in C++:

/* 

Conditional Statements are used to execute a particular task based on certain condition to be true.

There are mainly three conditional statements in C++.

1. If Statement
2. If Else Statement
3. If Else-If Else Statement

*/

#include <iostream>
using namespace std;

int main() {

  int x;
  cout<<"Enter Number :)"<<endl;
  cin>>x;
  
  // 1.A If Statement:
  if(x>0){
    cout<<"Positive Number :)"<<endl;
  }

  // 1.B If Else Statement:

  if(x>=0){
    cout<<"Positive Number :)"<<endl;
  }
  else{
    cout<<"Negative Number :("<<endl;
  }

  // 1.C If Else-If Else Statement:

  if(x>0){
    cout<<"Positive Number :)"<<endl;
  }
  else if (x<0){
    cout<<"Negative Number :("<<endl;
  }
  else{
    cout<<"Number is Zero :|"<<endl;
  }

  return 0;
}
