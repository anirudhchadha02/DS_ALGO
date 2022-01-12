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
node* merge2(node*a,node*b)
{
    if(a==NULL)
    {
        return b;
    }
    if(b==NULL)
    {
        return a;
    }
    node*c=NULL;

    if(a->data < b->data)
    {
        c=a;
        c->next=merge2(a->next,b);
    }
    else
    {
        c=b;
        c->next=merge2(a,b->next);
    }
    return c;
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
void print(node* head)
{
    while (head!=NULL)
    {
        cout<<head->data<<",";
        head=head->next;
    }
    cout<<endl;
}
ostream& operator<<(ostream &os,node*head)
{
    print(head);
    return os;
}
istream& operator>>(istream &is,node* &head)
{
    head = input();
    return is;

}

int main()
{
    // node* head= input();
    // node* head2=input();
    node* head=NULL;
    node* head2=NULL;
    cin>>head>>head2;
     cout<<head<<endl;
    cout<<head2<<endl;
    node* new_head=merge2(head,head2);

    // cascading of operators
    // print(head);
    // print(head2);
   
    cout<<new_head<<endl;
return 0;
}
