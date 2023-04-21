class Solution {
public:
    
    int longestValidParentheses(string s) {
        stack<int> st;
        int curr=0,maxlen=0;
        st.push(-1);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            if(s[i]==')')
            {
                st.pop();
                if(st.empty())
                {
                    st.push(i);
                }
                else
                {
                    maxlen=max(maxlen,i-st.top());
                }
            }
        }
        return maxlen;
        
    }
};
