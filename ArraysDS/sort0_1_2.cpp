#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sor(int a[], int n)
{
    int i, p, z = 0, o = 0, t = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            z++;
        }
        else if (a[i] == 1)
        {
            o++;
        }
        else
        {
            t++;
        }
    }
    int k = 0;
    for (i = 0; i < z; i++)
        a[k++] = 0;
    for (i = 0; i < o; i++)
        a[k++] = 1;
    for (i = 0; i < t; i++)
        a[k++] = 2;

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}
int main()
{
    int n = 6;
    int a[n] = {1, 0, 2, 1, 0, 0};
    sor(a, n);

    return 0;
}