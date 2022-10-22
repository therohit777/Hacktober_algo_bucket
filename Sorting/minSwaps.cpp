#include <iostream>
#include <vector>

using namespace std;

int minSwaps(int *arr, int size)
{
    int count = 0;
    
    for(int i=0;i<size-1;i++){
        int min = i;
        for(int j=i;j<size;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(arr[min]!=arr[i]){
            swap(arr[min], arr[i]);
            count++;
        }
    }
    return count;
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Minimum number of swaps required is: "<<minSwaps(arr, size);
    return 0;
}