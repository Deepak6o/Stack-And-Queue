class Solution{
public:

    void Reverse(stack<int> &St){
       vector<int> s1;
       while(!St.empty())
       {
           int num=St.top();
           St.pop();
           s1.push_back(num);
       }
       for(int i=0;i<s1.size();i++)
       {
           St.push(s1[i]);
       }
       
    }
};
