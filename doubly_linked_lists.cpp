#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node*prev;
    node(int d)
    {
        data=d;
    }
};
void insertAtHead(node*head,int d)
{
    node*a=new node(d);
    a->next=head;
    a->prev=NULL;
    
    if(head!=NULL)
    {
        head->prev=NULL;
    }
    head=a;
}
void insertInMiddle(node*prevNode,int d,int pos)
{
    prevNode=NULL;

    node* a=new node(d);
    int jumps=0;
    while(jumps<=pos)
    {
        prevNode=prevNode->next;
        jumps++;
    }
    a->next=prevNode->next;
    prevNode->next=a;
    a->prev=prevNode;
    if(a->next!=NULL)
    {
        a->next->prev=a;
    }
}



int main()
{

return 0;
}