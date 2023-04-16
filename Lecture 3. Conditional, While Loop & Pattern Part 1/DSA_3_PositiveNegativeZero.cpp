// 3) Question. Write a program to check if the number is Positive, Negative or Zero.

#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter Number :)"<<endl;
  cin>>n;

  if(n>0){
    cout<<"Positive Number :)"<<endl;
  }
  else if(n<0){
    cout<<"Negative Number :)"<<endl;
  }
  else{
    cout<<"Number is Zero :|"<<endl;
  }

  return 0;
}
