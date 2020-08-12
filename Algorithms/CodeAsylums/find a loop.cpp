#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)

struct node{
int data;
struct node* next;
};

void push(struct node **s, int x)
{
	struct node* temp;
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	struct node* add;
	int k=0;

	newnode->data=x;
	newnode->next=NULL;

	temp=*s;

	if(temp==NULL)
	{

		*s=newnode;
		return;
	}
	while(temp->next!=NULL)
	{
		k++;
		temp=temp->next;
		if(k==3)
		{
			add=temp;
		}
	}
	temp->next=newnode;
	if(k==6)
	{
		newnode->next=add;
	}
	
}




void display(struct node* head )
{
	struct node* temp=head;
	while(temp->next!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<temp->data<<endl;
}

void rem(struct node* head, struct node* p)
{
	struct node* t1=head;
	struct node* t2=p;
while(t1->next!=t2->next)
{
t1=t1->next;
t2=t2->next;
}
t2->next=NULL;
cout<<"after removal\n";
display(head);
}

void detect(struct node* head)
{
struct node* slow=head;
struct node* fast=head;
while(fast!=NULL && slow!=NULL && fast->next!=NULL)
{
slow=slow->next;
fast=fast->next->next;
if(slow==fast)
{
	cout<<"Loop found\n";
	rem(head,slow);
	return;
}
}

cout<<"Loop not found\n";
return;
}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	
//////////////////////////////////////////////////////////////////////
	

	struct node* head=NULL;
	

for(int i=1;i<=8;i++)
{
	push(&head,i);
}
//display(head);
detect(head);


//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}