#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)

int q,t,k;
string n;
string s="";
string sprev="";
void appen()
{
sprev=s;
s=s+n;
cout<<"after append "<<s.length()<<endl;
}

void del()
{
sprev=s;
s.erase(s.length()-k);
cout<<"after delete "<<s.length()<<endl;
}
void prin()
{
cout<<"print "<<s[k-1]<<endl;

}
void undo()
{
s=sprev;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
//////////////////////////////////////////////////////////////////////
	cin>>q;

while(q--)
{
	cin>>t;
	if(t==1)
	{
		cin>>n;
		cout<<n<<endl;
		appen();
	}
	if(t==2)
	{
		cin>>k;
		del();
	}
	if(t==3)
	{
		cin>>k;
		prin();
	}
	if(t==4)
	{
		undo();
	}
}





//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}