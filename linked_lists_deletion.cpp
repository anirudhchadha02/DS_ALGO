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
void deleteAtHead(Node* &head)
{
    if(head==NULL)
    {
        return;
    }
    Node* temp = head->next;
    delete head;
    head=temp;
}

void deleteAtTail(Node* &head)
{
    Node* temp=head;
    Node* prev=NULL;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    delete temp;
    prev->next=NULL;
    return;
}
void deleteInMiddle(Node*&head, int p)
{
    int jumps=1;
    Node* temp=head;
    Node*prev=0;
    while(jumps<=p-1)
    {
        prev=temp;
        temp=temp->next;
        jumps++;
    }
    prev->next=temp->next;
    delete temp;
    return;
}
void print(Node* head)
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
     Node* head=NULL;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);
    deleteInMiddle(head,3);
    print(head);
    deleteAtHead(head);
    print(head);
    deleteAtTail(head);
    print(head);
    


return 0;
}