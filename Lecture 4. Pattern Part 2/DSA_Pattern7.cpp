// 7) Pattern Question.

/*

1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

*/


#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter Value of n :)"<<endl;
  cin>>n;

  int i=1;
  int count;
  while(i<=n){
    int j=1;
    count = i;
    while(j<=i){
      cout<<count<<" ";
      count++;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
