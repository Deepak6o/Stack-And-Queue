#include<iostream>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;

       Stack(int size)
       {
           this->size=size;
           arr=new int[size];
           top=-1;
       }
       void push(int element)
       {
           if(size-top>1)
           {
               top++;
               arr[top]=element;
           }
           else
           {
               cout<<"Stack Overflow";
           }
       }
       void pop()
       {
           if(top>=0)
           {
               top--;
           }
           else
           {
               cout<<"Stack Underflow";
           }
       }
       int peek()
       {
           if(top>=0)
           {
               return arr[top];
           }
           else
           {
               cout<<"Stack is empty";
           }
       }
       int isEmpty()
       {
           if(top==-1)
           {
               return true;
           }
           else
           {
               return false;
           }
       }
};
int main()
{
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    //cout<<st.peek();
    if(st.isEmpty())
    {
        cout<<"Stack is Empty";
    }
    else{
        cout<<"Stack is Not Empty";
    }
}
