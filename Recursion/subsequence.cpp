#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int ind, vector<int> &ds, int arr[], int n ){
    if(ind==n){
        for(auto it : ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }

    //not take or not pick condition, this element will not bw added to the subsequnce
    print(ind+1, ds, arr, n);

    //take or pick condition, the element will be added to the subsequence
    ds.push_back(arr[ind]);
    print(ind+1, ds, arr, n);
    ds.pop_back();
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<int> ds;
    print(0, ds, arr, n);

    return 0;
}