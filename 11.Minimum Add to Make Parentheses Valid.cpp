class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>st;
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='(')
            {
                st.push(ch);
            }
            else if(st.empty())
            {
                cnt++;
            }
            else
            {
                st.pop();
            }
        }
        return (st.size()+cnt);
    }
};
