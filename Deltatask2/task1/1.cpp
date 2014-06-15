

	int a=1;
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

