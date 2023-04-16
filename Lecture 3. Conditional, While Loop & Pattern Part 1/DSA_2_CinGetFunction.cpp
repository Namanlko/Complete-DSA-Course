// 2) cin.get() Function:

/*
cin does not consider space, tab and enter. To make it consider space, tab and enter we have to use cin.get() Function. 

cin.get() Function return ASCII value of input.
*/

#include <iostream>
using namespace std;

int main() {

  int x;
  cout<<"Enter Value :)"<<endl;
  
  x = cin.get();
  cout<<x<<endl;

  return 0;
}

