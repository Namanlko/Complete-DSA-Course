// 8) Question. Write a program to find the factorial of a number.

#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter Number :)"<<endl;
  cin>>n;

  int i=1;
  int fact = 1;
  while(i<=n){
    fact *= i;
    i++;
  }
  cout<<"Factorial is "<<fact<<endl;

  return 0;
}