#include<iostream>
using namespace std;

int Reverse(int n){
    int ans = 0;
    while(n!=0){
        int lastDigit = n%10;
        if(ans>(INT16_MAX/10)||ans<(INT16_MIN/10)){
            return 0;
        }
        ans = (ans*10) + lastDigit;
        n = n/10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<Reverse(n);
    return 0;
}