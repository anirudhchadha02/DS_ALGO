#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node*next;

    node(int d)
    {
        data=d;
    }

};
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
node* input()
{
    node* head=NULL;
    int d;
    cin>>d;
    while(d!=-1)
    {
        insertAtHead(head,d);
        cin>>d;
    }
    return head;
}
void reverse(node*&head)
{
    node*c=head;
    node*prev=NULL;
    node*n;
    while(c!=NULL)
    {
        n=c->next;
        c->next=prev;
        prev=c;
        c=n;
    }
    head=prev;
}
void print(node* head)
{
    while (head!=NULL)
    {
        cout<<head->data<<",";
        head=head->next;
    }
    cout<<endl;
}

node* recursive_reverse(node*head)
{
    if(head==NULL or head->next==NULL)
    return head;

    node*shead=recursive_reverse(head->next);
    node*temp=shead;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    head->next=NULL;
    temp->next=head;
    return shead;
}

int main()
{
    node* head=input();
    head=recursive_reverse(head);
    print(head);

return 0;
}