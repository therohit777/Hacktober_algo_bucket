#include <bits/stdc++.h>
using namespace std;

string find_window(string s, string p)
{

    // Frequency map for string characters
    int FP[256] = {0};
    int FS[256] = {0};

    for (int i = 0; i < p.length(); i++)
    {
        FP[p[i]]++;
    }

    // sliding algorithm

    int count = 0;
    int min_so_far = INT_MAX;
    int start = 0;
    int start_ind = -1;
    int window_size;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        // expanding the window by including the current character
        FS[ch]++;

        if (FP[ch] != 0 or FS[ch] <= FP[ch])
        {
            count++;
        }

        // if all the characters are found then start contracting the window
        if (count == p.length())
        {

            // starting contracting from left
            while (FP[s[start]] == 0 or FS[s[start]] > FP[s[start]])
            {
                FS[s[start]]--;
                start++;
            }

            // note the window size
            int window_size = i - start + 1;
            if (window_size < min_so_far)
            {
                min_so_far = window_size;
                start_ind = start;
            }
        }
    }

    if (start_ind == -1)
    {
        return "No string found";
    }
    else
    {
        return s.substr(start_ind, min_so_far);
    }
}

int main()
{
    string s, p;
    cin >> s >> p;
    cout << find_window(s, p) << endl;
    return 0;
}