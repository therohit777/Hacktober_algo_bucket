// Quicksort with an element present in the list as pivot
// and using recursive calls for the quick_sort function
#include <iostream>
// Lomuto's partition algorithm
int partition(int A[],int p,int r){
    int i,j,pivot,temp;
    temp=A[(p+r)/2];
    A[(p+r)/2]=A[r];
    A[r]=temp;
    i=p;
    pivot=A[r];
    for(j=p;j<r;j++){
        if(A[j]<=pivot){
            temp=A[i];
            A[i++]=A[j];
            A[j]=temp;
        }
    }
    A[r]=A[i];
    A[i]=pivot;
    return i;
}


void quick_sort(int A[],int p,int r){
    int q;
    while(p<r){
        q=partition(A,p,r);
        if(q-p<r-q){
            quick_sort(A,p,q-1);
            p=q+1;
        }
        else{
            quick_sort(A,q+1,r);
            r=q-1;
        }
    }
}
int main(){
    int n;

    std::cin>>n;
    int *arr=new int [n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}