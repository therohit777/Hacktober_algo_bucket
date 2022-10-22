#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
public:
    int find_median(vector<int> v)
    {
        int s = v.size();
        sort(v.begin(), v.end());

        if (s % 2 != 0)
        {
            return v[s / 2];
        }
        else
        {
            return (v[s / 2] + v[s / 2 - 1]) / 2;
        }
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        Solution ob;
        int ans = ob.find_median(v);
        cout << ans << "\n";
    }
    return 0;
}
