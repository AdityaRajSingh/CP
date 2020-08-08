#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)

struct node{
int data;
struct node* next;
};

void push(struct node **s, int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
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
		
		temp=temp->next;
	}
	temp->next=newnode;
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

void sum(struct node* h1, struct node* h2)
{
	struct node* n4; 
	struct node* temp1=h1;
	struct node* temp2=h2;
	int carry=0;
	struct node* n1=h1;
	while(temp2!=NULL && temp1!=NULL)
	{
		temp1->data=(temp1->data)+(temp2->data)+carry;
		if(temp1->data>9)
		{
			carry=1;
			temp1->data=temp1->data-10;
		}
		else
		{
			carry=0;
		}

		n1=temp1;
		n4=temp1;
		temp1=temp1->next;
		temp2=temp2->next;
	}


	if(temp1!=NULL && temp2==NULL)
	{
	while(temp1!=NULL)
	{
		temp1->data=(temp1->data)+carry;
		if(temp1->data>9)
		{
			carry=1;
			temp1->data=temp1->data-10;
		}
		else
		{
			carry=0;
		}
		n4=temp1;
		temp1=temp1->next;
	}
}
else if(temp1==NULL && temp2!=NULL)
	{
		n1->next=temp2;
		n1=n1->next;
		while(n1!=NULL)
		{
			n1->data=(n1->data)+carry;
		if(n1->data>9)
		{
			carry=1;
			n1->data=n1->data-10;
		}
		else
		{
			carry=0;
		}
		n4=n1;
		n1=n1->next;
		}
	}
	if (carry==1)
	{
		struct node* n5=(struct node*)malloc(sizeof(struct node));
		n5->data=1;
		n5->next=NULL;
		n4->next=n5;
	}
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
//////////////////////////////////////////////////////////////////////
	

	struct node* h1=NULL;
	struct node* h2=NULL;
	int n1=4,n2=4;
	//cin>>n1>>n2;
for(int i=0;i<n1;i++)
{
/*	int x;
	cin>>x;*/
	push(&h1,9);
}
display(h1);
for(int i=0;i<n2;i++)
{
/*	int x;
	cin>>x;*/
	push(&h2,2);
}
display(h2);

sum(h1,h2);
display(h1);



//////////////////////////////////////////////////////////////////////


	
	return 0;
}