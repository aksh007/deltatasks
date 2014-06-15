#include <iostream>

using namespace std;

int main()
{

	int a=1;
	struct node
	{
		int data;
		node* next;
	};


	node* n=new node;
	node* t=n;
	node* h=n;
	int i=1;
	int k;
	cin>>k;
	/*creating the linked list*/
	while(i<=k)
	{
	    if(i==k)
		n->next=NULL;
		n=new node;
		n->next=t;
		t=n;
		t->data=a++;

	}
    //adding a node at the beginning//
	n=new node;
	n->next=h;
	h=n;
	h->data=0;
