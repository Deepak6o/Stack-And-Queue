class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        
        for(int i=0;i<n;i++)
        {
            int row=0;
            for(int j=0;j<n;j++)
            {
                
                if(M[i][j]==0)
                {
                    row++;
                }
               
            }
            int col=0;
            for(int j=0;j<n;j++)
            {
                if(M[j][i]==1)
                {
                    col++;
                }
            }
            if(row==n and col==n-1)
            {
                return i;
            }
        }
        return -1;
    }
};
