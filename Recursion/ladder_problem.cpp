//a person can jump K steps up the ladder. If he wants to reach Nth step,
//find the no. of ways he can do that.
//eg: 4 steps (N) , k=3 i.e. he can take 1,2 and 3 steps
//no of ways = 7

#include<iostream>
using namespace std;

int ladder(int n,int k){
//base case
if(n==0)
return 1;

if(n<0)
return 0;
//rec case
 int ans=0;
 for(int i=1;i<=k;i++){
    ans+=ladder(n-i,k);
   }
 return ans;  

}

int main(){
 int n,k;
 cin>>n>>k;

 cout<< ladder(n,k);
    return 0;
}
