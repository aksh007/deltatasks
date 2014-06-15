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
    		if(fp->data=q)
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
}
