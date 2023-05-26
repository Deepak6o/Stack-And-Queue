queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> s;
    queue<int > q1;
    for(int i=0;i<k;i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(!q.empty())
    {
        q1.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while(!q1.empty())
    {
        q.push(q1.front());
        q1.pop();
    }
    return q;
}
