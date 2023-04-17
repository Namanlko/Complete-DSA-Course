// 1) Bitwise Operators in C++:

/*
Bitwise Operator works on Binary Digits. There are mainly six bitwise operators in C++.

1. AND (&) Operator
2. OR (|) Operator
3. NOT (~) Operator
4. XOR (^) Operator
5. Left Shift (<<) Operator
6. Right Shift (>>) Operator

*/


#include <iostream>
using namespace std;

int main() {

  // AND, OR, NOT, XOR
  int a = 4;
  int b = 6;
  cout<<"a & b "<<(a&b)<<endl;
  cout<<"a | b "<<(a|b)<<endl;
  cout<<"~a "<<(~a)<<endl;
  cout<<"a ^ b "<<(a^b)<<endl;

  // Left Shift, Right Shift
  int x=5;
  cout<<(x<<1)<<endl;
  cout<<(x>>1)<<endl;
  
  return 0;
}
