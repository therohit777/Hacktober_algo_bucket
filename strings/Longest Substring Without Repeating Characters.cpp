class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,pair<int,int>>hashmap;
        int best_len=0;
        int prev_len=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(hashmap.find(s[i])==hashmap.end())
            {
                hashmap[s[i]].first++;
                hashmap[s[i]].second=i;
                prev_len++;
            }
            else
            {
                best_len=max(prev_len,best_len);
                i=hashmap[s[i]].second;
                hashmap.clear();
                prev_len=0;
            }
        }
        best_len=max(prev_len,best_len);
        return best_len;
    }
};
