														//ADITYA RAJ SINGH//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ld i=a;i<b;i++)
#define rep1(i,a,b) for(ll i=a;i<=b;i++)
//ll M=1e+9;
ll power(ll x, ll y, ll M)  
{   ll res = 1; x = x % M; if (x == 0) return 0;  while (y > 0)  {    if (y & 1)  res = (res*x) % M;    y = y>>1; x = (x*x) % M;  }  return res;  } 
ll modInverse(ll a, ll M) 
{   ll g = __gcd(a, M); if (g != 1) return -1; else return(power(a, M-2, M)); } 


ld t,h,c; 
ld N=1e1;

ld f(ld x)
{
	ld c1=(h*x+c*x)/2*x;
	ld c2=(h*(x+1)+c*x)/((2*x)+1);
	return min(abs(t-c1),abs(t-c2));
}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll te;
	cin>>te;
	
	while(te--)
	{
		cin>>h>>c>>t;
		ld prev=t;
		ld x1;
		ld ans=0;
		for(ld i=1;i<N;i+=1)
		{
			ld curr=f(i);
			cout<<"curr = "<<curr<<endl;
			if(curr==0)
			{
				x1=i;
				break;
			}
			if(curr>prev)
			{
				x1=i-1;
				break;
			}
			else
			{
				prev=curr;
			}
		}
		
		ld c1=(h*x1+c*x1)/2*x1;
		ld c2=(h*(x1+1)+c*x1)/((2*x1)+1);
		if(c1<c2)
		{
			ans=2*x1;
		}
		else
		{
			ans=(2*x1)+1;
		}
		if(t==h)
		{
			ans=1;
		}
		cout<<ans<<endl;

	}	
	return 0;
}