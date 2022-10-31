/*
Print numbers from 1 to N without the help of loops.

Example 1:

Input:
N = 10
Output: 1 2 3 4 5 6 7 8 9 10

Example 2:

Input:
N = 5
Output: 1 2 3 4 5


Your Task:
This is a function problem. You only need to complete the function printNos() that takes N as parameter and prints number from 1 to N recursively. Don't print newline, it will be added by the driver code.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N) (Recursive).


Constraints:
1 <= N <= 1000

*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        if(N<1){
            return;
        }
        cout<<N<<" ";
        printNos(N-1);

    }
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;

    //taking testcases
    cin>>T;

    while(T--)
    {
        int N;

        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
/*
Time Complexity: O(N).
Auxiliary Space: O(N) (Recursive).
*/

/*
Recursion:
Base Case
Stack Overflow/Stack Space
Recursion Tree.
*/
