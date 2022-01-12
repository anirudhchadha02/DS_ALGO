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
void print(node* head)
{
    while (head!=NULL)
    {
        cout<<head->data<<",";
        head=head->next;
    }
    cout<<endl;
    

}
// liner search

bool search(node*head, int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        else
        {
            temp=temp->next;
        }
    }
    return false;
}

// recursively
bool search_recursive( node* head, int key)
{
    if(head==NULL)
    return false;
    
    if(head->data==key)
    return true;
    else
    return search_recursive(head->next, key); 
}



int main()
{
     node* head=NULL;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);
    print(head);
    bool val=search(head,10);
    bool val2=search_recursive(head,1);
    cout<<val<<endl;
    cout<<val2<<endl;

return 0;
}