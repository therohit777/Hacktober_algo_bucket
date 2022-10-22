#include <iostream>
using namespace std;
int main (){
int n,i,pos,arr[n],v;
  cin>>n;
  
  for ( i = 0; i < n-1; i++)
  {
     cin>>arr[i];
  }
  
  cout<<"enter positon on which you want deletion";
  cin>>pos;
  cout<<"enter value";
  cin>>v;
  
  for ( i = n-2; i >=pos; i--)
  {
    arr[i+1]=arr[i];
  }
  arr[pos]=v;
  for ( i = 0; i < n; i++)
  {
   cout<<arr[i]<<endl;
  }
  
  
  
  
return 0;
 }