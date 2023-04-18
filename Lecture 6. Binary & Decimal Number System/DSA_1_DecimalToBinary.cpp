// 1) Decimal to Binary Conversion.


#include<iostream>
#include<math.h>
using namespace std;

int DecimalToBinary(int n){
  int i=0, ans = 0;
  while(n!=0){
    int lastDigit = n%2;
    ans = ans + lastDigit * pow(10,i);
    n = n/2;
    i++;
  }
  return ans;
}

int main(){
  int n;
  cin>>n;
  cout<<DecimalToBinary(n);
  return 0;
}