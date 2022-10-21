//sum of digits
#include <iostream>
using namespace std;
int main(){
	int n,i,sum;
	cout<<"enter the number: ";
	cin>>n;
	while(n!=0){
		i=n%10;
		n=n/10;
		sum=sum+i;
	}
	cout<<"the sum of the digits of the number is= "<<sum;
	return 0;
}
