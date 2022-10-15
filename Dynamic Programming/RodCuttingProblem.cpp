#include <iostream>
#include <string>
#include <climits>
using namespace std;
 
// Function to find the best way to cut a rod of length `n`
// where the rod of length `i` has a cost `price[i-1]`
int rodCut(int price[], int n)
{
    // base case
    if (n == 0) {
        return 0;
    }
 
    int maxValue = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        // rod of length `i` has a cost `price[i-1]`
        int cost = price[i - 1] + rodCut(price, n - i);
 
        if (cost > maxValue) {
            maxValue = cost;
        }
    }
 
    return maxValue;
}
 
int main()
{
    int price[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
 
    // rod length
    int n = 4;
 
    cout << "Profit is " << rodCut(price, n);
 
    return 0;
}
