#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// max function 

int maxA(int *arr, int n){
    int max = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        if(max <= arr[i]){
            max = arr[i];
        }
    }
    return max;
}

// main bucket sort function

// TC : O(n)

void bucketSort(int *arr, int n, int k){
    int max = maxA(arr, n) + 1;
    vector<int> bkt[k];
    for (int i = 0; i < n; i++)
    {
        int bi = (k*arr[i])/max;
        bkt[bi].push_back(arr[i]);
    }
    for (int i = 0; i < k; i++)
    {
        sort(bkt[i].begin(), bkt[i].end());
    }
    int index = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < bkt[i].size(); j++)
        {
            arr[index++] = bkt[i][j];
        }
    }
}

// main code starts here 

int main(){
    int n, k;
    cin>>n>>k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bucketSort(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}