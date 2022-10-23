#include<iostream>
using namespace std;

// method 1 : naive solution 
// Note : not a general purpose implementation

// TC : o(n+k)
// SC : o(n+k)

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

// void cSort(int *arr, int n, int k){
//     int count[k] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         count[arr[i]]++;
//     }
//     int index = 0;
//     for (int i = 0; i < k; i++)
//     {
//         for (int j = 0; j < count[i]; j++)
//         {
//             arr[index] = i;
//             index++;
//         }
//     }
    
// }

// ===================================================

// method 2 : general purpose implementation 

// TC : o(n+k)
// SC : o(n+k)

void cSort(int *arr, int n, int k){
    int count[k] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i < n; i++)
    {
        count[i] = count[i-1] + count[i];
    }
    int output[n];
    for (int i = n-1; i >= 0; i--)
    {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

// ===================================================

// main code starts here 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cSort(arr, n, maxA(arr, n)+1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}