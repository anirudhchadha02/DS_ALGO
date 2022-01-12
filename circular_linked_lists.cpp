#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};

void insertAtHead(node*head,int d)
{
    node*a=new node(d);
    node*last=head;
    while(last->next!=head)
    {
        last=last->next;
    }
    last->next=a;
    a->next=head;
    a=head;
}

void print(node*head)
{
    node*temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<temp->data<<endl;

}

node* get_node(node*head,int d)
{
    node*temp=head;
    while(temp->next!=head)
    {
        if(temp->data==d)
        {
            return temp;
        }
        temp=temp->next;
    }
    temp=temp->next;
    if(temp->data==d)
        {
            return temp;
        }
    return NULL;
}

void dekete_node(node*&head,int d)
{
    node*del=get_node(head,d);
    if(del==NULL)
    return;
    if(del==head)
    head=head->next;

    node*temp=head;
    while(temp->next!=del)
    {
        temp=temp->next;
    }
    temp->next=del->next;
    delete del;
}
