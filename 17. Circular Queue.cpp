#include <bits/stdc++.h> 
class CircularQueue{
    public:
    // Initialize your data structure.
    int *arr;
    int front;
    int rear;
    int size;
    CircularQueue(int n){
        // Write your code here.
        size=10001;
        arr=new int[size];
        front=rear=-1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        // to check whether queue is full
        if((front==0 and rear=size-1) or (rear=(front-1)%(size-1))){
            cout<<"Queue is Full";
            return false;
        }
        else if(front==-1)
        {
            front=rear=0;
            // push first element
        }
        else if(rear=size-1 and front!=0)
        {
            // to maintain cyclic nature
            rear=0;
            arr[rear]=value;
        }
        else{
            rear++;
            
        }
        arr[rear]=vale;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        // to check queue is empty
        if(front==-1)
        {
            cout<<"Queue is Empty";
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear)
        {
            // for singlr element
            front=rear=-1;
        }
        else if(front==size-1)
        {
            front=0;//to maintain cyclic natue
        }
        else{
            front++;
        }
        return ans;
    }
};
