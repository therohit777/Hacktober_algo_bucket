#include<iostream>
using namespace std;

int main()
{
	int arr[20],size;
	cout<<"Enter arr size";
	cin>>size;
	cout<<"Enter arr elements";
	for(int i=0;i<size;i++)
		cin>>arr[i];
	
	for(int i=0;i<size;i++)
	{
		int temp=arr[i];
		int j=i-1;
		while(arr[j]>temp && j>=0)
		{
			arr[j+1]=arr[j];
			j--;		
		}
		arr[j+1]=temp;
	}
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";	
return 0;		
}
