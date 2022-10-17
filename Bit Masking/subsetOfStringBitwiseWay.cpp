#include<iostream>
#include<string.h>
#include<math.h>
#include<ctype.h>
using namespace std;


int main() {
    string s;
    cin>>s;
    int n = s.length();
    int r = pow(2,n);
    for (int i=0;i<r;i++) {
        for (int j=0;j<n;j++) {
            if ( (i & (1<<j)) != 0) {
                cout<<s[j];
            }
        }
        cout<<endl;
    }
}
