// 21) Pattern Question.

/*

      1
    2 2
  3 3 3
4 4 4 4

*/


#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter Value of n :)"<<endl;
  cin>>n;

  int i=1;
  while(i<=n){
    int j=n;
    while(j>i){
      cout<<"  ";
      j--;
    }
    int k=1;
    while(k<=i){
      cout<<i<<" ";
      k++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
