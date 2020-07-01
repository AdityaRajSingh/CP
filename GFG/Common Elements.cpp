#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

//l M=1e+9;

ll power(ll x, ll y, ll M)  
{   ll res = 1; x = x % M; if (x == 0) return 0;
    while (y > 0)  
    {  
        if (y & 1)  res = (res*x) % M;     
        y = y>>1; x = (x*x) % M;
    }  
    return res;  
} 

ll modInverse(ll a, ll M) 
{ 
    ll g = __gcd(a, M); 
    if (g != 1) return -1; 
    else return(power(a, M-2, M)); 
} 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n1,n2,n3; cin>>t;
	while(t--)
	{
		cin>>n1>>n2>>n3;
		ll a[n1];
		rep(i,0,n1)
			cin>>a[i];
		ll b[n2];
		
		rep(i,0,n2)
			cin>>b[i];
			
		ll c[n3];
		rep(i,0,n3)
			cin>>c[i];
			
			
		ll i=0,j=0,k=0;	
		int prev=-1;
		while(i<n1 && j<n2 && k<n3)
		{
		    if(a[i]==b[j] && b[j]==c[k] && c[k]!=prev)
		    {
		        cout<<a[i]<<" ";
		        prev=a[i];
		        i++;
		        j++;
		        k++;
		    }
		    else if(a[i]==b[j] && b[j]==c[k] && c[k]==prev)
		    {
		        i++;
		        j++;
		        k++;   
		    }
		    else
		    {
		        ll m=max(a[i],b[j]);
		        m=max(m,c[k]);

                if(a[i]<m )
                {
                    i++;
                }
                else if(b[j]<m )
                {
                    j++;
                }
                 if(c[k]<m)
                {
                    k++;
                }
		    }
		}
		if(prev==-1)
		cout<<-1;
        cout<<endl;



	}	
	return 0;
}