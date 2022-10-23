#include<iostream>
using namespace std;

void housing(int plots[], int n, int k){
    int i = 0, j = 0;
    int currSum = 0;
    while(j < n){
        currSum+= plots[j];
        j++;

        while(currSum > k and i < j){
            currSum = currSum - plots[i];
            i++;
        }

        if(currSum == k){
            cout<<i<<", "<<j-1<<endl;
        }
    }
}

int main(){
    int n, k;
    cin>>n>>k;
    int plots[n];
    for (int i = 0; i < n; i++)
    {
        cin>>plots[i];
    }
    housing(plots, n, k);
    return 0;
}