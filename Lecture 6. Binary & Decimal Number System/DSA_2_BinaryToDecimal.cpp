// 2) Binary to Decimal Conversion.


#include<iostream>
#include<math.h>
using namespace std;

int BinaryToDecimal(int n){
  int i=0, ans = 0;
  while(n!=0){
    int lastDigit = n%10;
    ans = ans + lastDigit * pow(2,i);
    n = n/10;
    i++;
  }
  return ans;
}

int main(){
  int n;
  cin>>n;
  cout<<BinaryToDecimal(n);
  return 0;
}