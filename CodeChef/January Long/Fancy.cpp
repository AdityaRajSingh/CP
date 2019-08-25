

/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define cres(c,n) (c).clear(),(c).resize(n)
#define all(a) (a).begin(), (a).end()
#define ff first
#define ss second
#define mk make_pair
		

		int *pre_kmp(string pattern)
{
	int size = pattern.size();
	int *pie=new int [size];
	pie[0] = 0;
	int k=0;
	for(int i=1;i<size;i++)
	{
		while(k>0 && pattern[k] != pattern[i] )
		{
			k=pie[k-1];
		}
		if( pattern[k] == pattern[i] )
		{
			k=k+1;
		}
		pie[i]=k;
	}
	
	return pie;
}

int kmp(string text,string pattern)
{
	int* pie=pre_kmp(pattern);
	int matched_pos=0;
	int k=0;
	for(int current=0; current< text.length(); current++)
	{
		while (matched_pos > 0 && pattern[matched_pos] != text[current] )
			matched_pos = pie[matched_pos-1];
			
		if(pattern[matched_pos] == text[current])
			matched_pos = matched_pos+1;
			
		if( matched_pos == (pattern.length()) )
		{
			k=1;
			matched_pos = pie[matched_pos-1];
		}
	}
	return k;
}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
string text,pattern;
    int k;
	cin>>text;
	int l=text.length();
	
	if(l<3)
	k=0;
	
	if(l==3)
	{
	    pattern="not";
	    k=kmp(text,pattern);
	}
		if(l>3)
	{
        if((text[0]=='n' && text[1]=='o' && text[2]=='t' && text[3]==' ') || (text[l-1]=='t' && text[l-2]=='o' && text[l-3]=='n' && text[l-4]==' '))
        k=1;
	}
	if(l>4)
	{
	    pattern=" not ";
	    k=kmp(text,pattern);
	}
if(k==0)
{
    cout<<"regularly fancy"<<endl;	
}
if(k==1)
{
    cout<<"Real Fancy"<<endl;
}







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}