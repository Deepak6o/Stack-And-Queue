class Solution {
public:
  //next Smaller Element
    vector<int>nextSmallerElement(vector<int> &arr,int n)
    {
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--)
        {
            while(st.top()!=-1 and arr[st.top()]>=arr[i])
            {
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
  // previous next element
    vector<int>prevSmallerElement(vector<int> &arr,int n)
        {
            stack<int> st;
            st.push(-1);
            vector<int> ans(n);
            for(int i=0;i<n;i++)
            {
                while(st.top()!=-1 and arr[st.top()]>=arr[i])
                {
                    st.pop();
                }
                ans[i]=st.top();
                st.push(i);
            }
            return ans;
        }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> next(n);
        next=nextSmallerElement(heights,n);
        vector<int> prev(n);
        prev=prevSmallerElement(heights,n);
        int area=INT_MIN;
        for(int i=0;i<n;i++)
        {
             if(next[i]==-1)
            {
                next[i]=n;
            }
            int l=heights[i];
            int b=next[i]-prev[i]-1;
           
            int currArea=l*b;
            area=max(area,currArea);
        }
        return area;
        
    }
};
