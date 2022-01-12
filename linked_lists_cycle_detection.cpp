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
bool cycle_detection(node*head)
{
    node*slow=head;
    node*fast=head;

    while(fast!=NULL and fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            return true;
        }
        else
        {
        return false;
        }
    }
}
int main()
{
    // node* head= input();
    // node* head2=input();
    node* head=NULL;
    // node* head2=NULL;
    cin>>head;

    // cascading of operators
    // print(head);
    // print(head2);
    cout<<cycle_detection(head)<<endl;
    // cout<<head<<head2;
return 0;
}