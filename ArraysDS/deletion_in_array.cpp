#include <iostream>
using namespace std;
int main (){
int n,i,pos,arr[n];
  cin>>n;
  
  for ( i = 0; i < n; i++)
  {
     cin>>arr[i];
  }
  
  cout<<"enter positon on which you want deletion";
  cin>>pos;
  
  for ( i = pos; i < n; i++)
  {
     arr[i]=arr[i+1];
  }
  
  for ( i = 0; i < n-1; i++)
  {
   cout<<arr[i];
  }
  
  
  
  
return 0;
 }