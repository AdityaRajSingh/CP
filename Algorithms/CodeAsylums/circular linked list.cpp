#include<bits/stdc++.h>
using namespace std;



struct node
{
	int data;
	struct node* next;
	
};

	void push(struct node** s,int x)
	{
		struct node* newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		if(*s==NULL)
		{
			newnode->next=NULL;
			*s=newnode;
			return;
		}
		struct node* temp=*s;
		while(temp->next!=*s && temp->next!=NULL)
		{
			temp=temp->next;
		}
		newnode->next=*s;
		temp->next=newnode;
		
	}

void display(struct node* head)
{
    if(head==NULL)return;

    if(head->next==NULL){cout<<head->data<<endl;return;}
    
	struct node* temp=head;
	while(temp->next!=head)
	{
		cout<<(temp->data)<<"->";
		temp=temp->next;
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
	


//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}