//The problem is solved using C++

/*  The problem is to find all possible combinations by replacing key's digits with characters of the
 corresponding list */
 
#include <bits/stdc++.h>
using namespace std;
 
void allCombinations(vector<char> keypad[], int input[],
                      string s, int index, int n)
{
    // If every digit of key is processed then print result
    if (index == n) {
        cout << s << " ";
        return;
    }
 
    // Stores current digit
    int digit = input[index];
 
    // Size of the list corresponding to current digit
    int length = keypad[digit].size();
 
    /* One by one replace the digit with each character in
     the corresponding list and recur for next digit */
  
    for (int i = 0; i < length; i++) {
        allCombinations(keypad, input, s + keypad[digit][i], 
                        index + 1, n);
    }
}

 // Main code
int main()
{
    // Given mobile keypad
    vector<char> keypad[]
        = { {},
            {}, // 0 and 1 digit don't have any characters associated
                
            { 'a', 'b', 'c' },
            { 'd', 'e', 'f' },
            { 'g', 'h', 'i' },
            { 'j', 'k', 'l' },
            { 'm', 'n', 'o' },
            { 'p', 'q', 'r', 's' },
            { 't', 'u', 'v' },
            { 'w', 'x', 'y', 'z' } };
 
    // input the numbers
    int input[] = { 2, 3, 4 };
 
    // Size of the array
    int n = sizeof(input) / sizeof(input[0]);
 
    // Function call
    allCombinations(keypad, input, string(""), 0, n);
 
    return 0;
}
