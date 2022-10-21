#include <bits/stdc++.h>
using namespace std;


stack<int> sortStack(stack<int> input)
{
	stack<int> tmpStack;

	while (!input.empty())
	{
		
		int tmp = input.top();
		input.pop();

		
		while (!tmpStack.empty() &&
				tmpStack.top() < tmp)
		{
			
			input.push(tmpStack.top());
			tmpStack.pop();
		}

		
		tmpStack.push(tmp);
	}

	return tmpStack;
}

void sortArrayUsingStacks(int arr[], int n)
{
	
	stack<int> input;
	for (int i=0; i<n; i++)
	input.push(arr[i]);

	
	stack<int> tmpStack = sortStack(input);

	
	for (int i=0; i<n; i++)
	{
		arr[i] = tmpStack.top();
		tmpStack.pop();
	}
}


int main()
{
	int arr[] = {10, 5, 15, 45};
	int n = sizeof(arr)/sizeof(arr[0]);

	sortArrayUsingStacks(arr, n);

	for (int i=0; i<n; i++)
	cout << arr[i] << " ";

	return 0;
}
