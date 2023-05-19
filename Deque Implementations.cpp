void push_back_pb(deque<int> &dq, int x) {
    // Your code here
    dq.push_back(x);
}

// Function to pop element from back of the deque.
void pop_back_ppb(deque<int> &dq) {
    if (!dq.empty())
        /*Your code here*/
        {
            dq.pop_back();
        }
        else return;
}

// Function to return element from front of the deque.
int front_dq(deque<int> &dq) {
    if (!dq.empty())
        /*Your code here*/
        {
            return dq.front();
        dq.pop_back();
        }
        else return -1;
}

// Function to push element x to the front of the deque.
void push_front_pf(deque<int> &dq, int x) {
    // Your code here
    dq.push_front(x);
}
