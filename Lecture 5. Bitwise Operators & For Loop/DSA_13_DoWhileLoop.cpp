// 13) Do While Loop in C++:

/*
Do While loop execution is also terminated on the basis of a test condition. Difference between a do while loop and a while loop is in the do-while loop the condition is tested at the end of the loop body, i.e do-while loop is exit controlled whereas the other two loops are entry-controlled loops.
*/


#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter Number :)"<<endl;
  cin>>n;

  int i=1;
  do{
    cout<<i<<endl;
    i++;
  }
  while(i<=n);
  
  return 0;
}