// 4) Operators in C++:

#include <iostream>
using namespace std;

int main() {

  // 4.A Arithmetic Operators:
  int a = 8;
  int b = 5;
  
  cout<<"Addition is "<<(a+b)<<endl;
  cout<<"Subtraction is "<<(a-b)<<endl;
  cout<<"Multiplication is "<<(a*b)<<endl;
  cout<<"Division is "<<(a/b)<<endl;
  cout<<"Modulus is "<<(a%b)<<endl;

  // 4.B Increment and Decrement Operators:
  int c = 8;
  int d = 5;

  // Post Increment and Post Decrement:
  cout<<"c++ is "<<(c++)<<endl;
  cout<<"d-- is "<<(d--)<<endl;
  cout<<"c is "<<c<<endl;
  cout<<"d is "<<d<<endl;

  int e = 8;
  int f = 5;
  
  // Pre Increment and Pre Decrement:
  cout<<"++e is "<<(++e)<<endl;
  cout<<"--f is "<<(--f)<<endl;
  cout<<"e is "<<e<<endl;
  cout<<"f is "<<f<<endl;

  // 4.C Realtional Operators:
  int g = 8;
  int h = 5;
  
  cout<<"Is Equal to "<<(a==b)<<endl;
  cout<<"Is Not Equal to "<<(a!=b)<<endl;
  cout<<"Is Greater Than "<<(a>b)<<endl;
  cout<<"Is Less Than "<<(a<b)<<endl;
  cout<<"Is Greater Than Or Equal to "<<(a>=b)<<endl;
  cout<<"Is Less Than Or Equal to "<<(a<=b)<<endl;

  // 4.D Assignment Operators:
  
  int i = 8;
  cout<<"= is "<<i<<endl;
  
  int j = 5;
  j += 1;
  cout<<"+= is "<<j<<endl;

  int k = 5;
  k -= 1;
  cout<<"-= is "<<k<<endl;

  int l = 5;
  l /= 2;
  cout<<"/= is "<<l<<endl;

  int m = 5;
  m *= 2;
  cout<<"*= is "<<m<<endl;

  int n = 5;
  n %= 2;
  cout<<"%= is "<<n<<endl;

  // 4.D Logical Operators:
  
  int x = 10;
  
  // AND Operator:
  if(a>5 && a<15){
    cout<<"a is "<<a<<endl;
  }

  // OR Operator:
  if(a>5 || a<15){
    cout<<"a is "<<a<<endl;
  }

  // NOT Operator:
  if(!a){
    cout<<"a is "<<a<<endl;
  }
  else{
    cout<<"a is "<<a<<endl;
  }
  
  return 0;
}