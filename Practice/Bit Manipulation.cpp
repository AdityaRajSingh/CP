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


//(x & (x - 1)) will have all the bits equal to the x except for the rightmost 1 in x
//x ^ ( x & (x-1)) : Returns the rightmost 1 in binary representation of x.
// x & (-x) : Returns the rightmost 1 in binary representation of x
//(-x) will have all the bits flipped that are on the left of the rightmost 1 in x
// x | (1 << n) : Returns the number x with the nth bit set.
ll x,y;

void shift()
{
	cout<<"x<<y "<<(x<<y)<<"\n";
cout<<"x>>y "<<(x>>y)<<"\n";
}

void powerOfTwo()
{
//(x-1) will have all the bits same as x, except for the rightmost 1 in x and all the bits to the right of the rightmost 1.
if(!(x&x-1) && x)
	cout<<"YES a power of two\n";

else
	cout<<"NO not a power of two\n";
}

void numberOfOnes()
{
	ll n=x,c=0;;
	while(n)
	{
		n=n&n-1;
		c++;
	}
	cout<<"No of Ones ="<<c<<endl;
}
void ithBitSet()
{
	ll i=2;
	if(x & (1<<i))
		cout<<"Yes ith bit set \n";
	else
		cout<<"No ith bit not set \n";
}


void allPossibleSubsets()
{
	string s="abc";
	ll n=3;
	rep(i,0,1<<n)
	{
		rep(j,0,n)
		{
			if(i&(1<<j))
				cout<<s[j];
			else
				cout<<"_";

		}
		cout<<"\n";
	}

}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
cin>>x;
cin>>y;
shift();
powerOfTwo();
numberOfOnes();
ithBitSet();
allPossibleSubsets();
cout<<(4&(~(1<<2)));

////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}