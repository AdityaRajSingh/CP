														//ADITYA RAJ SINGH//
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rep1(i,a,b) for(ll i=a;i<=b;i++)


ll count1s0s(ll N) 
{ 
    // Initialise count variables 
    ll count0 = 0, count1 = 0; 
  
    // Iterate through all the bits 
    while (N > 0) { 
  
        // If current bit is 1 
        if (N & 1) { 
            count1++; 
        } 
  
        // If current bit is 0 
        else { 
            count0++; 
        } 
  
        N = N >> 1; 
    } 

    return count1;
 
} 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll n,m; 

		cin>>n>>m;
		ll a[n],b[m];
		rep(i,0,n)
			cin>>a[i];
		rep(i,0,m)
			cin>>b[i];

		sort(a,a+n);
		sort(b,b+m);
		ll ans=0;
		rep(i,0,n)
		{
			ll k=INT_MAX,countof1=INT_MAX;
			rep(j,0,m)
			{
				ll x=a[i]&b[j];
				
				//ll cc=count1s0s(x);
				// cout<<cc<<endl;
				// if(cc<countof1)
				// {
				// 	k=x;
				// 	countof1=cc;
				// }


				cout<<x<<endl;
				k=min(k,x);
				
			}
			//cout<<"min countof1= "<<countof1<<" k= "<<k<<endl<<endl;
			cout<<k<<endl<<endl;
			ans=ans|k;
		}
		cout<<ans;	
	return 0;
}