// 10) Pattern Question.
/*

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter Value of n :)"<<endl;
  cin>>n;

  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<"*"<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}