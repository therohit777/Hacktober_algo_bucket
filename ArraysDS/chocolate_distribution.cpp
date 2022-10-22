#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int chocolate(int arr[], int n,int m)
{
    int min = INT_MAX, i;
    for (i = 0; i + m - 1 < n; i++)
    {
        int d = arr[i + m - 2] - arr[i];
        if (d < min)
        {
            min = d;
        }
    }

    return min;
    
}
int main()
{
    int i, n,m, arr[n];
    cin >> n>>m;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << chocolate(arr, n,m);

    return 0;
}