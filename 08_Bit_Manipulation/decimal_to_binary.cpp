#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;

int ans=0;
int power=1;
while(n>0)
{
    int last_bit=(n&1);
    ans+=power*last_bit;
    power*=10;
    n=n>>1;
}
cout<<"binary representation of the givern number is : "<<ans<<endl;
return 0;
}
