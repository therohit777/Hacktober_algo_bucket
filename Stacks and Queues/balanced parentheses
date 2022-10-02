#include<bits/stdc++.h>
#define mo 1000000007
#define ll long long int
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
using namespace std;
bool check(string s) 
{
    if(s.size()==0)
    return true;
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(st.size()==0)
        {
            st.push(s[i]);
        }
        else
        {
            if(st.top()=='(' && s[i]==')')
            st.pop();
            else
            st.push(s[i]);
        }
    }
    if(st.size()==0)
    return true;
    else
    return false;
}
void solve()
{
    string s;
    cin>>s;
    if(check(s))
    cout<<"The parentheses are balanced"<<"\n";
    else
    cout<<"The parentheses are not balanced"<<"\n";
}
int main()
{
    solve();
    return 0;
}
