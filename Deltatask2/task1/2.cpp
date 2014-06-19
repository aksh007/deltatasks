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
	//adding a node at the end//
	n=new node;
	n->next=t;
	t=n;
	t->next=NULL;
	t->data=a++;
	//counting number of nodes//
	int p=0;
	while(!(t->next==NULL))
	{
		p++;
		t=t->next;
	}
	cout<<p;
}
