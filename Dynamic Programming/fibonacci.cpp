#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0 || n==1) return n;
    int x=0, y=1;
    for(int i=2;i<=n;i++){
        int z=x+y;
        x=y, y=z;
    }
    return y;
}

int main(){
    int n;
    cin>>n;
    cout<<"The n-th fibonacci number is - "<<fib(n)<<endl;
    return 0;
}