#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
// sort using a custom function object
struct {
    bool operator()(int a, int b) const
    {
        string value1 = to_string(a) + to_string(b);
        string value2 = to_string(b) + to_string(a);
 
        return value1 > value2;
    }
} customCompare;
 
string findLargestNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end(), customCompare);
    string s;
    for (int &i: nums) {
        s += to_string(i);
    }
    return s;
}
 
int main()
{
    vector<int> numbers = { 10, 68, 97, 9, 21, 12 };
 
    cout << "The largest number is " << findLargestNumber(numbers) << endl;
 
    return 0;
}
