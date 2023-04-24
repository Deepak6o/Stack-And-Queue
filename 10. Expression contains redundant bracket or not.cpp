class Solution {
  public:
    int checkRedundancy(string s) {
        // code here
        stack<int> st;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/' )
            {
                st.push(ch);
            }
            else
            {
                 
                if(ch==')')
                {
                    bool isrebundant=true;
                   
                    while(st.top()!='(')
                    {
                        char top=st.top();
                        if(top=='+' || top=='-' || top=='*' || top=='/')
                        {
                            isrebundant=false;
                        }
                        st.pop();
                    }
                    if(isrebundant==true)
                    {
                        return true;
                    }
                st.pop();
                }
                
            }
        }
        return false;
    }
};
