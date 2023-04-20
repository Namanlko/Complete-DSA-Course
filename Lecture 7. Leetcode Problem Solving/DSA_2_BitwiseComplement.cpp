#include<iostream>
using namespace std;

int BitwiseComplement(int n){
    int m = n;
    int mask = 0;
    if (n == 0){
        return 1;
    }
    while (m != 0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    return (~n) & mask;
}

int main(){
    int n;
    cout<<"Enter Number :)"<<endl;
    cin>>n;
    cout<<BitwiseComplement(n);
    return 0;
}