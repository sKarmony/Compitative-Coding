#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *next; 
};

void addNode(Node** headptr, int value)
{
	Node* newnode = new Node();
	newnode->data=value;
	newnode->next= *headptr ;
	*headptr=newnode;

	return;
}
void addEnd(Node** headptr, int value)
{
	Node* newnode = new Node();
	newnode->data=value;
	Node *ptr=*headptr;
	newnode->next = NULL;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=newnode;
	return;
}

void addAfter(Node* after, int value)
{
	Node* newnode = new Node();
	newnode->data=value;
	newnode->next=after->next;
	after->next=newnode;
}


void addBefore( Node** headptr,int before, int value )
{
	Node* newnode=new Node();
	newnode->data=value;
	Node *ptr = *headptr;
	while(ptr->next->data!=before)
	{
		ptr = ptr->next;
	}
	newnode->next=ptr->next;
	ptr->next=newnode;
	return;

}

void printll(Node** headptr)
{
	Node *ptr = *headptr;
	while(ptr != NULL)
	{
		cout<<" "<<ptr->data;
		ptr=ptr->next;
	}


}

int main()  
{  
  Node* head = NULL;  
  addNode(&head, 4);  
  addNode(&head, 7);  
  addNode(&head, 1);  
  addNode(&head, 4);  
  addEnd(&head, 9);
  addEnd(&head, 2); 
  addAfter(head->next->next, 8); 
  addBefore(&head, 8, 5); 

    
  cout<<"Created Linked list is: ";  
  printll(&head);  
    
  return 0;  
}  
