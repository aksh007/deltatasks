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
	//finding the nth node//
	int z;
	cin>>z;
	int j;
	cin>>j;
	node* u=h;
	while(!(j==z))
	{
		u=u->next;
	}
	cout<<u->data;
}
