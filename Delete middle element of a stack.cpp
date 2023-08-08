//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

// class Solution
// {
//     public:
//     //Function to delete middle element of a stack.
//     void solve(stack<int>&s, int count, int sizeOfStack)
//     {
//         if(count==sizeOfStack/2)
//         {
//             s.pop();
//             return;
//         }
//         int num=s.top();
//         s.pop();
//         solve(s,count+1,sizeOfStack);
//         s.push(num);
//     }
//     void deleteMid(stack<int>&s, int sizeOfStack)
//     {
//         // code here.. 
//         int count =0;
//         solve(s,count,sizeOfStack);
//     }
// };
class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        stack<int> st;
        int k=sizeOfStack/2;
        for(int i=0;i<k;i++)
        {
            int x=s.top();
            s.pop();
            st.push(x);
        }
        s.pop();
        while(!st.empty())
        {
            int x=st.top();
            st.pop();
            s.push(x);
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends
