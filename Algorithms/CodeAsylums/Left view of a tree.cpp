#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int data)
{
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->left=NULL;
temp->right=NULL;
return temp;
}



void level(struct node* root)
{
queue<struct node*> q;
if(root==NULL)
{
	return;
}
q.push(root);


while(!q.empty())
{
	int s=0;
	int c=0;
	int l=q.size();
	for(int i=0;i<l;i++)
	{
		if(i==0)
			cout<<q.front()->data<<endl;
		struct node* temp=q.front();	
	
	q.pop();
	if(temp->left!=NULL)
	q.push(temp->left);
	if(temp->right!=NULL)
	q.push(temp->right);
	}
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

struct node* root= newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5);
root->left->right->right=newNode(6);


level(root);




//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}