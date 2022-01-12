#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
void build()
{}
void insertAtHead(Node* &head,int d)
{
    if(head==NULL)
    {
    head=new Node(d);
    return;
    }
    Node *n=new Node(d);
    n->next=head;
    // head=head->next;
    head=n;
}
void print(Node* head)
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
    Node* head=NULL;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);
    print(head);
return 0;
}