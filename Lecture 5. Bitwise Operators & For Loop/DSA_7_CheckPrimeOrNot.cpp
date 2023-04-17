// 7) Question. Write a program to check if a number is prime or not.


#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter Number :)"<<endl;
  cin>>n;

  bool flag = true;
  
  for(int i=2; i<n; i++){
    if(n%i == 0){
      flag = false;
      break;
    }
  }

  if(flag){
    cout<<n<<" is Prime Number :)"<<endl;
  }
  else{
    cout<<n<<" is Not Prime Number :("<<endl;
  }
  return 0;
}
