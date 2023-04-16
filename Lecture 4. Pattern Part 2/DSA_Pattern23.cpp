// 23) Pattern Question.

/*

      1
    2 3
  4 5 6
7 8 9 10

*/


#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter Value of n :)"<<endl;
  cin>>n;

  int i=1;
  int count = 1;
  while(i<=n){
    int j=n;
    while(j>i){
      cout<<"  ";
      j--;
    }
    int k=1;
    while(k<=i){
      cout<<count<<" ";
      count++;
      k++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
