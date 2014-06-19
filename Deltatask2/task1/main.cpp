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
	node* t;
	node* h;
	t=n;
	h=n;
	int i=1;
	int k;
	cin>>k;
	/*creating the linked list*/
	while(i<=k)
	{
	    if(i==k)
		n->next=NULL;
		n=new node;
		t->next=n;
		t=n;
		t->data=a++;
		i++;

	}
	//counting number of nodes//
	int p=0;
	node* l=h;
	while(!(l->next==NULL))
	{
		p++;
		l=l->next;
	}
	cout<<p<<endl;
	//adding a node at the beginning//
	n=new node;
	n->next=h;
	h=n;
	h->data=0;
	//counting number of nodes//
	p=0;
	node* ll=h;
	while(!(ll->next==NULL))
	{
		p++;
		ll=ll->next;
	}
	cout<<p<<endl;
	//adding a node at the end//
	n=new node;
	t->next=n;
	t=n;
	n->next=NULL;
	t->data=a++;
	//counting number of nodes//
	p=0;
	node* lll=h;
	while(!(lll->next==NULL))
	{
		p++;
		lll=lll->next;
	}
	cout<<p<<endl;

	//deleting a particular node//
	int q;
	cin>>q;
    if(h->data==q)
    {
    	node*c=h;
    	h=h->next;
    	delete c;

    }
    else
    {
    	node* fp=h;
    	node* bp=h;
    	while(fp->next==NULL)
    	{
    		if(fp->data==q)
    		break;
    		else
    		if(fp==bp)
    		{
    			fp=fp->next;
    		}
    		else
    		{

    		fp=fp->next;
    		bp=bp->next;
    	    }
    	}
    	if(fp->next==NULL)
    	cout<<"Node not found";
    	else
    	{
    	bp->next=bp->next->next;
        delete fp;
		}

	}
	//counting number of nodes//
	p=0;
	node* l1=h;
	while(!(l1->next==NULL))
	{
		p++;
		l1=l1->next;
	}
	cout<<p<<endl;
	//finding the nth node//
	int z;
	cin>>z;
	int j=1;
	node* u=h;
	while(j<=z)
	{
		u=u->next;
		j++;
	}
	cout<<u->data;

	while(h->next!=NULL)
    {
        cout<<h->data<<endl;
        h=h->next;
    }




}


