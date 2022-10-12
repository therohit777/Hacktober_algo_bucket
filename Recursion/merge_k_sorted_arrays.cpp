//this algorithm is same as merge sort algorithm
//it only applicable for sorted arrays

#include <bits/stdc++.h>
using namespace std;
#define N 4

// this function merges two arrays a1,a2 into one array a3
void Merge_Arrays(int a1[], int a2[], int N1, int N2,
                 int a3[])
{
    int i = 0, j = 0, k = 0;
  
    while (i < N1 && j < N2) {
        if (a1[i] < a2[j])
            a3[k++] = a1[i++];
        else
         a3[k++] = a2[j++];
    }
 
   
    while (i < N1)
        a3[k++] = a1[i++];
  
    while (j < N2)
        a3[k++] = a2[j++];
}
 

void Merge_K_Arrays(int a[][N], int i, int j, int opt[])
{ 
    //only for one array
    if (i == j) {
        for (int p = 0; p < N; p++)
            opt[p] = a[i][p];
        return;
    }
  
    //if only two arrays left
    if (j - i == 1) {
        Merge_Arrays(a[i], a[j], N, N, opt);
        return;
    }
    int mid=(i+j)/2;
    //output arrays 
    int opt1[N * (mid - i + 1)],
        opt2[N * (j - mid)];
  
    //dividing the array into halves
    Merge_K_Arrays(a, i, mid, opt1);
    Merge_K_Arrays(a,mid + 1, j, opt2);
  
    //merging the output array
    Merge_Arrays(opt1, opt2, N * (mid - i + 1),
                N * (j - mid), opt);
}
 
//function to print the merged sorted array 
void Print_Array(int a[], int size)
{
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
}



int main()
{ 
    int K;
    cout<<"Enter how many arrays do you want to merge: \n";
    cin>>K;
    int a[K][N] ;
    //all arrays should be sorted
    cout<<"Enter the values of each arrays of size 4:\n";
    for (int i = 0; i < K; i++)
    {
         
        for (int j = 0; j < N; j++)
        {
             cin>>a[i][j];
        }
    }
    
    int opt[N * K];
    Merge_K_Arrays(a, 0, K-1, opt);
 
    cout << "Merged array is " << endl;
    Print_Array(opt, N * K);
 
    return 0;
}