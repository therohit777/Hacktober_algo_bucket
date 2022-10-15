
#include <bits/stdc++.h>
using namespace std;


void populateAux(int aux[], queue<int> queue0, queue<int> queue1,
				queue<int> queue2, int* top)
{
	// Put all items of first queue in aux[]
	while (!queue0.empty()) {
		aux[(*top)++] = queue0.front();
		queue0.pop();
	}

	while (!queue1.empty()) {
		aux[(*top)++] = queue1.front();
		queue1.pop();
	}

	while (!queue2.empty()) {
		aux[(*top)++] = queue2.front();
		queue2.pop();
	}
}


int findMaxMultupleOf3(int arr[], int size)
{
	// Step 1: sort the array in non-decreasing order
	sort(arr, arr + size);


	queue<int> queue0, queue1, queue2;


	int i, sum;
	for (i = 0, sum = 0; i < size; ++i) {
		sum += arr[i];
		if ((arr[i] % 3) == 0)
			queue0.push(arr[i]);
		else if ((arr[i] % 3) == 1)
			queue1.push(arr[i]);
		else
			queue2.push(arr[i]);
	}

	if ((sum % 3) == 1) {
		// either remove one item from queue1
		if (!queue1.empty())
			queue1.pop();

		// or remove two items from queue2
		else {
			if (!queue2.empty())
				queue2.pop();
			else
				return 0;

			if (!queue2.empty())
				queue2.pop();
			else
				return 0;
		}
	}

	else if ((sum % 3) == 2) {
		// either remove one item from queue2
		if (!queue2.empty())
			queue2.pop();

		else {
			if (!queue1.empty())
				queue1.pop();
			else
				return 0;

			if (!queue1.empty())
				queue1.pop();
			else
				return 0;
		}
	}

	int aux[size], top = 0;

	populateAux(aux, queue0, queue1, queue2, &top);

	sort(aux, aux + top, greater<int>());

	// print the result
	for (int i = 0; i < top; ++i)
		cout << aux[i] << " ";

	return top;
}
int main()
{

	int arr[] = { 8, 1, 7, 6, 0 };
	int size = sizeof(arr) / sizeof(arr[0]);

	if (findMaxMultupleOf3(arr, size) == 0)
		cout << "Not Possible";

	return 0;
}
