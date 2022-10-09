#include<iostream>
using namespace std;

									//	O(n^2) Average Case
int main()
{
	int arr[20],size;
	int count=0;
	cout<<"Enter arr size";
	cin>>size;
	cout<<"\nEnter arr elements";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nBubble Sort:";
	for(int  i=0;i<size;i++)			//IMP
	{
		for(int j=i+1;j<size;j++)				//IMP
		{
			if(arr[j]<arr[i])				//IMP j<i
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		count++;
	}
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<"\nSwaps done for sorting"<<count;
return 0;		
}
