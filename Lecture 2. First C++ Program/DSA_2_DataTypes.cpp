// 2) Data Types and Variables in C++:

/* Size of Operator is used to find the size of a variable.*/

#include <iostream>
using namespace std;

int main() {
  
  int a = 5;
  cout<<a<<endl;
  cout<<sizeof(a)<<endl;
  
  cout<<"-------------------"<<endl;
  
  char b = 'A';
  cout<<b<<endl;
  cout<<sizeof(b)<<endl;

  cout<<"-------------------"<<endl;
  
  float c = 5.23f;
  cout<<c<<endl;
  cout<<sizeof(c)<<endl;

  cout<<"-------------------"<<endl;
  
  bool d = true;
  cout<<d<<endl;
  cout<<sizeof(d)<<endl;

  cout<<"-------------------"<<endl;
  
  double f = 5.45;
  cout<<f<<endl;
  cout<<sizeof(f)<<endl;
  
  return 0;
}
