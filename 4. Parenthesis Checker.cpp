class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        st.push(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(s[i]==')' )
            {
                if(st.empty()==false and st.top()=='(')
                {
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]=='}')
            {
                if(st.empty()==false and st.top()=='{')
                {
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]==']')
            {
                if(st.empty()==false and st.top()=='[')
                {
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
        
    }
};
