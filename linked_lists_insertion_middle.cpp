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
    }
};

int length(node*head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}
void insertAtHead(node* &head,int d)
{
    if(head==NULL)
    {
    head=new node(d);
    return;
    }
    node *n=new node(d);
    n->next=head;
    // head=head->next;
    head=n;
}

void insertInMiddle(node*&head,int d, int p)
{
    int jumps=1;
    node*temp=head;
    while(jumps<=p-1)
    {
        temp=temp->next;
        jumps++;
    }
    node*n=new node(d);
    n->next=temp->next;
    temp->next=n;
}
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}


int main()
{
    node*head=NULL;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);
    insertInMiddle(head,5,2);
    print(head);
return 0;
}