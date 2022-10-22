#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int geek(int a, int b, int c, int n)
{
    if (n == 1)
        return a;
    if (n == 2)
        return b;
    if (n == 3)
        return c;

    return geek(a, b, c, n - 1) + geek(a, b, c, n - 2) + geek(a, b, c, n - 3);
}

int main()
{
    int a, b, c, n,t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> n;

        cout << geek(a, b, c, n) << endl;
    }

    return 0;
}