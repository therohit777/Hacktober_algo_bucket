class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
        unordered_map<int, int> m;
        stack<int>st;
        st.push(-1);
        
        for (int i = n2.size()-1; i >= 0; i--)
        {
            while (st.top() != -1 && n2[i] > st.top())  
                st.pop();
            m[n2[i]] = st.top();
            st.push(n2[i]);
        }
        for (int i = 0; i < n1.size(); i++)
            n1[i] = m[n1[i]];
        
        return n1;
    }
};