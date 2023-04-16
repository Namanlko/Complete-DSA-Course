// 9) Question. Write a program to check if a number is prime or not.

#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter Number :)"<<endl;
  cin>>n;

  bool flag = true;
  
  int i=2;
  while(i<n){
    if(n%i == 0){
      flag = false;
    }
    i++;
  }

  if(flag){
    cout<<n<<" is a Prime Number :)"<<endl;
  }
  else{
    cout<<n<<" is not a Prime Number :)"<<endl;
  }

  return 0;
}
