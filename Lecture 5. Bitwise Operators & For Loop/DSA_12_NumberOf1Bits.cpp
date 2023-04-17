// 12) Question. (Leetcode 191) Number of 1 Bits.


#include <iostream>
using namespace std;

int Fun(int n){
  int count = 0;
  while(n>0){
    if(n&1){
      count++;
    }
    n = n>>1;
  }
  return count;
}

int main() {

  int n;
  cout<<"Enter Number :)"<<endl;
  cin>>n;
  cout<<Fun(n)<<endl;
  return 0;
}
