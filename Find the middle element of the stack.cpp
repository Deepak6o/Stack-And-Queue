#include<iostream>
using namespace std;
struct Node
{
    struct Node *next;
    struct Node *prev;
    int data;
    Node(int x)
    {
        data=x;
        next=prev=NULL;
    }
};

Node *dummy = new Node(-1);
Node *head=dummy;
Node *mid=dummy;
int cnt=0;

void push(int data)
{
    Node *cur=new Node(data);
    cur->prev=NULL;
    cur->next=head;
    cnt++;
    head->prev=cur;
    if(cnt==1)
    {
        mid=cur;
    }
    else if(cnt%2==0)
    {
        mid=mid->prev;
    }
}
int pop()
{
    if(cnt==0)
    {
        return -1;
    }
    Node *temp=head;
    int x=head->data;
    head=head->next;
    if(head!=NULL)
    {
        head->prev=NULL;
    }
    cnt--;
    if(cnt%2!=0)
    {
        mid=mid->next;
    }
    free(temp);
    return x;
}
int middle()
{
    if(cnt==0)
    {
        return -1;
    }
    return mid->data;
}
void printData()
{
    Node *cur=head;
    if(cnt==0)
    {
        cout<<"Stack is empty"<<endl;
        return;
    }
    for(int i=0;i<cnt;i++)
    {
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    cout<<endl;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printData();
    cout<<"Middle = "<<middle()<<endl;
}
