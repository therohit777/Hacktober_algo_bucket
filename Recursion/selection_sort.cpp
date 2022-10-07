#include<bits/stdc++.h>
using namespace std;
int minIndex(int arr[], int s, int e)
{
    int sml = INT32_MAX;
    int mindex;
    for (int i = s; i < e; i++) {
        if (sml > arr[i]) {
            sml = arr[i];
            mindex = i;
        }
    }
    return mindex;
}
 
void selectionsort(int arr[], int start_index, int end_index)
{
    if (start_index >= end_index)
        return;
    int min_index;
    int temp;
 
    // minIndex() returns index of minimum value in
    // array arr[start_index...end_index]
    min_index = minIndex(arr, start_index, end_index);
 
    // swap the element at start_index and min_index
    swap(arr[start_index], arr[min_index]);
 
    selectionsort(arr, start_index + 1, end_index);
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter the Elements of the Array. " << endl;
    for(int t=0;t<size;t++){
        cin>>arr[t];
    }
    selectionsort(arr, 0,size);
    for(int t=0;t<size;t++){
        cout<<arr[t]<<" ";
    }


}