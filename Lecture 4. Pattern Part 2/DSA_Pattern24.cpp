// 24) Pattern Question.

/*

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

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
      cout<<k<<" ";
      k++;
    }
    int l=2;
    while(l<=i){
      cout<<i-l+1<<" ";
      l++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
