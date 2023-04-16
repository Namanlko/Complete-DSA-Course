// 19) Pattern Question.

/*

* * * * *
  * * * *
    * * *
      * *
        *
*/


#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter Value of n :)"<<endl;
  cin>>n;

  int i=1;
  while(i<=n){
    int k=2;
    while(k<=i){
      cout<<"  ";
      k++;
    }
    int j=n;
    while(j>=i){
      cout<<"* ";
      j--;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
