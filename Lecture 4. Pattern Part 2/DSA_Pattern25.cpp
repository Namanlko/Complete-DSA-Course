// 25) Pattern Question.

/*

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 3 * * * * 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

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
    while(j<=n-i+1){
      cout<<j<<" ";
      j++;
    }
    int k=2;
    while(k<=i){
      cout<<"* * ";
      k++;
    }
    int l=n;
    while(l>=i){
      cout<<l-i+1<<" ";
      l--;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
