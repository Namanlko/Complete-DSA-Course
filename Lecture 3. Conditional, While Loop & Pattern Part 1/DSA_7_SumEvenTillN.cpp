// 7) Question. Write a program to find sum of first n even natural numbers.

#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter Number :)"<<endl;
  cin>>n;

  int i=2;
  int sum = 0;
  while(i<=n){
    sum += i;
    i = i+2;
  }
  cout<<"Sum is "<<sum<<endl;

  return 0;
}
