//Finding the 2 unique numbers in a given array of repeating elements

#include<iostream>
using namespace std;

int main()
{  int n;
cin>>n;
int Xor=0;
int a[n];
for(int i=0;i<n;i++)
{
 cin>>a[i];
 Xor=Xor^a[i];
}
//XOR of similar nos cancells out, only a^b left
int temp=Xor;
int pos=0;
 while((temp&1)!=1)
 {
      pos++;
      temp=temp>>1;
 }
 //the first set bit in xor is at "pos"

 //mask that checks whether the numbers have set bit at pos or not
int mask=(1<<pos);
//find those nos which contain set bit at pos
int x=0; int y=0;    //x and y are the two unique nos that we need to find
for(int i=0;i<n;i++)
{
    if((a[i]&mask)>0) //impiles set bit is there
    {
        x=x^a[i];
    }
}

y=Xor^x;  //2nd unique number

cout<<min(x,y)<<" "<<max(x,y);
    return 0;
}