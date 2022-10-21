#include<iostream>
#include<stack>
using namespace std;

 void insert_at_bottom(stack<int>&s,int x){
//base case
if(s.empty()){
s.push(x);
return;
}
//rec case
int data=s.top();
s.pop();
insert_at_bottom(s,x);
s.push(data);
 }

void reverse_stack(stack<int>&s){
    //base case
if(s.empty()){
    return;
}
//otherwise
//pop out the top element and insert it at the bottom of reversed smaller stack
   int x=s.top();
   s.pop() ;
    //rec reverse smaller stack
    reverse_stack(s);
    insert_at_bottom(s,x);
}

using namespace std;
int main()
{
    stack<int> s1;

    for (int i = 0; i < 5; i++)
    {
        s1.push(i);
    }

    reverse_stack(s1);
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;
}