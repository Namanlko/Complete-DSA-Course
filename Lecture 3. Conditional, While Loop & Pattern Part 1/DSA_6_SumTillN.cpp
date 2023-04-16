// 6) Question. Write a program to find sum of first n natural numbers.

#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter Number :)"<<endl;
  cin>>n;

  int i=1;
  int sum = 0;
  while(i<=n){
    sum += i;
    i++;
  }
  cout<<"Sum is "<<sum<<endl;

  return 0;
}
