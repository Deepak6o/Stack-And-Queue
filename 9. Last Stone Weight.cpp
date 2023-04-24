class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;
        for(int i=0;i<stones.size();i++)
        {
            p.push(stones[i]);
        }
        while(p.size()>1)
        {
            int max1=p.top();
            p.pop();
            int max2=p.top();
            p.pop();
            if(max1-max2)
            {
                p.push(max1-max2);
            }
        }
        if(p.empty())
        {
            return 0;
        }
        else
        {
            return p.top();
        }
        
    }
};
