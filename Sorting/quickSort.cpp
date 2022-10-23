#include<iostream>
using namespace std;

// TC : o(nlogn)  -> best
// SC : o(logn)  -> best

// TC : o(n^2)  -> worst
// SC : o(n)  -> worst

// method 1 : using lomuto partition 

// partition function 

// int lpartition(int *arr, int l, int h)
// {
//     int pivot = arr[h];

//     int x = l - 1;
//     for (int i = l; i < h; i++)
//     {
//         if (arr[i] < pivot)
//         {
//             x++;
//             swap(arr[i], arr[x]);
//         }
//     }
//     swap(arr[x + 1], arr[h]);
//     return x + 1;
// }

// // main sorting function 

// void qSort(int *arr, int l, int r){
//     if(l < r){
//         int p = lpartition(arr, l, r);
//         qSort(arr, l, p-1);
//         qSort(arr, p+1, r);
//     }
// }

// ============================================

// method 2 : using hoare's partition 

// partition function 

int hpartition(int *arr, int l, int h)
{
    int pivot = arr[l];
    int i = l - 1, j = h + 1;
    while (1)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
}

// main sorting function 

// void qSort(int *arr, int l, int r){
//     if(l < r){
//         int p = hpartition(arr, l, r);
//         qSort(arr, l, p);
//         qSort(arr, p+1, r);
//     }
// }

// tail call elimination 

void qSort(int *arr, int l, int r){
    begin:
    if(l < r){
        int p = hpartition(arr, l, r);
        qSort(arr, l, p);
        l = p+1;
        goto begin;
    }
}

// ============================================

// main code starts here 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    qSort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}