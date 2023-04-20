#include<iostream>
#include<math.h>
using namespace std;

bool PowerofTwo(int n){
    for(int i=0; i<=30; i++){
        int ans = pow(2,i);
        if(ans==n){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter Number :)"<<endl;
    cin>>n;
    cout<<PowerofTwo(n)<<endl;
    return 0;
}