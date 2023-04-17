// 11) Question. (Leetcode 1281) Subtract the product and sum of digits of an integer.


#include <iostream>
using namespace std;

int Fun(int n){
  int p = 1;
  int s = 0;
  while(n>0){
    int lastDigit = n%10;
    p *= lastDigit;
    s += lastDigit;
    n = n/10;
  }
  return (p-s);
}

int main() {

  int n;
  cout<<"Enter Number :)"<<endl;
  cin>>n;
  cout<<Fun(n)<<endl;
  return 0;
}
