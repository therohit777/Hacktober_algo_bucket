#include<bits/stdc++.h>
using namespace std;

string unique(string str){

    int i = 0;
    int j = 0;

    unordered_map<char, int> mpp;

    int window_len = 0;
    int max_window_len = 0;
    int start_index = -1;

    while(j < str.length()){

        char ch = str[j];

        // if it is inside the hashmap then we update the starting index of the window and update the window_len
        if(mpp.count(ch) and mpp[ch] >= i){
            i = mpp[ch] + 1;
            window_len = j - i;
        }

        // updating the element occurance in the map
        mpp[ch] = j;
        window_len++;
        j++;

        // comparing the window_len and updating the length and starting index 
        if(window_len > max_window_len){
            max_window_len = window_len;
            start_index = i;
        }
    }

    return str.substr(start_index, max_window_len);

}

int main(){
    string s;
    cin>>s;
    cout<<unique(s)<<endl;
    return 0;
}