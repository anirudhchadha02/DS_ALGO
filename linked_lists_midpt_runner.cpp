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
int length(node* head)
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

node* midpt_runner(node* head)
{
    if(head==NULL or head->next==NULL)
    {
        return head;
    }
    node*slow = head;
    node*fast=head->next;
    while(fast!=NULL and fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
node* kth_point(node*head, int k)
{
    int count=0;
    node*temp=head;
    int n=length(head);
    while(count<n-k)
    {
        temp=temp->next;
        count++;
    }
    return temp;
    
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


int main()
{
    node*head=input();
    node*mid=midpt_runner(head);
    cout<<mid->data<<endl;
    print(head);
    node* point=kth_point(head,3);
    cout<<point->data<<endl;
    return 0;
}