#include<iostream>
using namespace std;
int reverse(int i, int j, string &s){
    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
   return reverse(i+1,j-1,s);
}
int main(){
    string s;
    cin>>s;
    bool ans=reverse(0,s.length()-1,s);
    if(ans){
        cout<<"Pallindrome"<<endl;
    }
    else{
    cout<<"Not a Pallindrome"<<endl;
    }
    return 0;
} 
