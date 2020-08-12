#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node* next;
	struct node* prev;
};

	void push(struct node** s,int x)
	{
		struct node* newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=NULL;
		if(*s==NULL)
		{
			*s=newnode;
			newnode->prev=NULL;
			return;
		}
		struct node* temp=*s;
		while(temp->next!=NULL)
		{

			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
	}

void display(struct node* head)
{

	struct node* temp=head;
	while(temp->next!=NULL)
	{
		cout<<(temp->data)<<"->";
		temp=temp->next;
	}
	cout<<(temp->data);
}

void displayrev(struct node* head)
{

	struct node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	while(temp->prev!=NULL)
	{
		cout<<(temp->data)<<"->";
		temp=temp->prev;
	}
	cout<<(temp->data);
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif

//////////////////////////////////////////////////////////////////////

	struct node* head=NULL;
	for(int i=1;i<=10;i++)
	{
		push(&head,i);
	}
	
	display(head);
	cout<<endl;
	displayrev(head);



//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}