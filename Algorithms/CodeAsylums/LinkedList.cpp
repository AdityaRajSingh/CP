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
	struct node* temp2=h1;
	struct node* temp2=h2;
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
	int n1,n2;
	cin>>n1>>n2;
for(int i=0;i<n1;i++)
{
	int x;
	cin>>x;
	push(&h1,x);
}
display(h1);
for(int i=0;i<n2;i++)
{
	int x;
	cin>>x;
	push(&h2,x);
}
display(h2);

sum(h1,h2);


//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}