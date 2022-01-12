#include<iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
void insertAtTail(Node *&head, int d)
{
    if(head==NULL)
    {
        head=new Node(d);
        return;
    }
    Node*tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    tail->next=new Node(d);
    return;

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
    Node * head=NULL;
    insertAtTail(head,3);
    insertAtTail(head,2);
    insertAtTail(head,1);
    // insertAtTail(head,0);
    print(head);



return 0;
}