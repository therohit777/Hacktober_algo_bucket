#include<iostream>
using namespace std;

// TC : o(d*(n+b))  where b is 10 for this example 
// SC : o(n+b) 

// function to get max element 

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

// function for counting sort algorithm 

// replacing arr[i] to ((arr[i]/exp) % 10) to get the digits in a element 

void cSort(int *arr, int n, int exp){
    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count[(arr[i]/exp)%10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i-1] + count[i];
    }
    int output[n];
    for (int i = n-1; i >= 0; i--)
    {
        output[count[(arr[i]/exp) % 10]-1] = arr[i];
        count[(arr[i]/exp) % 10]--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

// main radix sort function 

void radixSort(int *arr, int n){
    int mx = maxA(arr, n);
    for (int exp = 1; mx/exp > 0; exp*=10)
    {
        cSort(arr, n, exp);
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
    radixSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}