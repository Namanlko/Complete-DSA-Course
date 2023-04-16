// 22) Pattern Question.

/*

1 2 3 4 5
2 3 4 5
3 4 5
4 5
5

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
    while(j>=i){
      cout<<(n-j+i)<<" ";
      j--;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
