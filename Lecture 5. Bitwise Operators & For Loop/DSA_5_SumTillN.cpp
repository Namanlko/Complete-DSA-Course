// 5) Question. Write a program to calculate the sum of first n natural numbers using for loop.


#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter Value of n?"<<endl;
  cin>>n;

  int sum = 0;
  for(int i=1; i<=n; i++){
    sum += i;
  }
  cout<<"Sum is "<<sum<<endl;
  return 0;
}