#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mk make_pair

ll max(int a, int b) { return (a > b)? a : b; }

ll c[1005],p[1005],x,y;



ll knapSack(ll C, ll n) 
{ 
   ll i, w; 
   ll K[n+1][C+1]; 
   for (i = 0; i <= n; i++) 
   { 
       for (w = 0; w <= C; w++) 
       { 
           if (i==0 || w==0) 
               K[i][w] = 0; 
           else if (c[i-1] <= w) 
                 K[i][w] = max(p[i-1] + K[i-1][w-c[i-1]],  K[i-1][w]); 
           else
                 K[i][w] = K[i-1][w]; 
       } 
   } 
   ll res = K[n][C];     
   vector<ll> v;
      
    w = C; 
    for (i = n; i > 0 && res > 0; i--) 
    { 
          
        if (res == K[i - 1][w])  
            continue;         
        else { 
            v.pb(p[i-1]);
            res = res - p[i - 1]; 
            w = w - c[i - 1]; 
        } 
    } 
    sort(v.begin(),v.end());
    ll mp=v[v.size()-1];
    ll smp=v[v.size()-2];

    ll a1=max(x,y);
	ll b1=min(x,y);

    ll ans=K[n][C];

    ans=ans-mp;
    ans+=mp*a1;
    ans=ans-smp;
    ans+=smp*b1;

   return ans; 
} 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll C,n;
	cin>>n>>C>>x>>y;
	rep(i,0,n)
	{
		cin>>c[i];
	}
	rep(i,0,n)
	{
		cin>>p[i];
	}
	cout<<knapSack(C,n);
	return 0;
}