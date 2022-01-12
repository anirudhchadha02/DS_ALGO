#include <iostream>
using namespace std;

class node{
public:
	int data;
	node *next;

	//constructor
	node(int d){
		data = d;
		next = NULL;
	}
};

//*insertion at head*/

void insertathead(node*&head,int data){
// create a  new node

	node* n= new node(data);
	n->next = head;
	head= n;


}

/*length function to go to a particular position*/

 int length(node * head){
 	int len =0;
 	while(head!=NULL){
 		head=head->next;
 		len+=1;
 	}
 	return len;
 }

//insertion at  tail

 void insertattail(node*&head, int data){
 	if (head == NULL){
 		head = new node(data);
 		return;
 	}

 	node * tail= head;
 // traversal till end 
 	while(tail->next !=NULL){
 		tail=tail->next;

 	}
 	tail->next= new node(data);
 	return;
 }

//inserion at middle or any position

void insertatpos(node*&head,int data,int position){

	if(head==NULL|| position==0){
		insertathead(head,data);
	}

	else if(position>length(head)){
		insertattail(head,data);

	}

	else{
// jump is used to check traversal from head to given position		
		 int jump =1;
// declare a temporary variable

		 node * temp =head;
		  while(jump<=position-1){
		  	temp=temp->next;
		  	jump++;
		  }

		  node *n= new node(data);
		  n->next=temp->next;
		  temp->next=n;
	}
}








//////////////////////////////////////////////  DELETION   //////////////////////////////////////////////////

//deletion at head

void deletionathead(node *&head){
	if (head == NULL){
		return;
	}

	node *temp=head;
	head= head->next;
	delete temp;
	return;
}


// deletion at tail

void deleteattail(node *&head){

	node * prev;
	node *temp =head;
	while(temp->next!=NULL){
		prev=temp;
		temp=temp->next;
	}
	delete temp;
	prev->next=NULL;
	return;

}

// delete at mid 

void deleteatpos(node*&head, int position){


	if(head==NULL|| position==0){
		return;
	}

	else if(position>length(head)){
		deleteattail(head);

	}

	else{
// jump is used to check traversal from head to given position		
		 int jump =1;
// declare a temporary variable

		 node * temp =head;
		  while(jump<=position-1){
		  	temp=temp->next;
		  	jump++;
		  }

		  node *prev;
		  prev->next=temp->next;
		  prev=head;
		  delete temp;
	}

}

///////       print linked list ///////////

void printll(node*head){
	node * temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp= temp->next;
	}


}


int main(){
	node *head=NULL;
	insertathead(head,5);
	insertathead(head,55);
	insertathead(head,6);
	insertathead(head,4);

    insertatpos(head,29,3);
    insertattail(head,555);

    deleteatpos(head,3);

	printll(head);

	return 0 ;


}