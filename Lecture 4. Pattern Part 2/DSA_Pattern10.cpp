// 10) Pattern Question.

/*

A B C D
A B C D
A B C D
A B C D

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
    char ch = 'A';
    while(j<=n){
      cout<<ch<<" ";
      j++;
      ch++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
