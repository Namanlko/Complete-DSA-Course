// 3) For Loop in C++:

/*
C++ for loop is a repetition control structure that allows us to write a loop that is executed a specific number of times. For loop is generally preferred over while and do-while loops when the number of iteration are known to us.

For loop is an entry-controlled loop where the test condition is checked before entering the body.
*/


#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter Value of n?"<<endl;
  cin>>n;

  cout<<"Counting from 1 to "<<n<<" are "<<endl;
  for(int i=1; i<=n; i++){
    cout<<i<<endl;
  }
  
  return 0;
}