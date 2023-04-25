class Solution{
  public:
   vector<int> nextSmallerElement(int *arr,int n)
   {
       stack<int> st;
       st.push(-1);
       vector<int>ans(n);
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
  vector<int> prevSmallerElement(int *arr,int n)
   {
       stack<int> st;
       st.push(-1);
       vector<int>ans(n);
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
   int Histoarea(int *arr,int n)
   {
       
       vector<int>next(n);
       next=nextSmallerElement(arr,n);
       vector<int>prev(n);
       prev=prevSmallerElement(arr,n);
       int area=INT_MIN;
       for(int i=0;i<n;i++)
       {
           if(next[i]==-1)
           {
               next[i]=n;
           }
           int l=arr[i];
           int b=next[i]-prev[i]-1;
           int currarea=l*b;
           area=max(area,currarea);
       }
       return area;
   }
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        int area=Histoarea(M[0],m);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(M[i][j]!=0)
                {
                    M[i][j]+=M[i-1][j];
                }
                else
                {
                    M[i][j]=0;
                }
            }
            area=max(area,Histoarea(M[i],m));
        }
        return area;
        
    }
};
