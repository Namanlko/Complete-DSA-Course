// 5) Pattern Question.

/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

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
    while(j<=i){
      cout<<j<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
