/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


struct node
{
int data;	
struct node *next;
};

void start(struct node **headref,int val)
{
struct node *temp=(struct node*)malloc(sizeof(struct node*));
temp->data=val;
temp->next=*headref;
*headref=temp;
}


void deleteNode(struct node **headref, int key)
{
struct node *iterator=*headref;
struct node *prev=NULL;

if(iterator!=NULL && iterator->data== key)
{
	*headref=iterator->next;
	free(iterator);
	return;
}

while(iterator!=NULL && iterator->data!=key)
{
prev=iterator;
iterator=iterator->next;
}

if(iterator==NULL)
return;

prev->next=iterator->next;
free(iterator);


}

void  print(struct node *head)
{
while(head!=NULL)
{
	cout<<(head->data);
	head=head->next;
}
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif

////////////////////////////////////////////////////////////////////////////////////////////
	

struct node *head= NULL;
struct node *second=NULL;
struct node *third=NULL;
head= (struct  node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));


head->data=1;
head->next=second;

second->data=2;
second->next=third;

third->data=3;
third->next=NULL;

start(&head,0);
deleteNode(&head,0);
print(head);
////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}