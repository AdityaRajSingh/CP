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

ll n;
ll a[100005];


int main()
{
		freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
 //  #ifndef ONLINE_JUDGE
	// 	freopen("/home/aadi/Documents/input.txt", "r", stdin);
	//     freopen("/home/aadi/Documents/output.txt", "w", stdout);
	// #endif
	fast;
	
	 

		cin>>n;
		rep(i,0,n)
			cin>>a[i];
		sort(a,a+n);
		// rep(i,0,n)
		// {
		// 	cout<<a[i]<<" ";
		// }
		// cout<<endl;
		// ll ans=LONG_MAX;
		// rep(i,0,n)
		// {
		// 	ll ub=upper_bound(a,a+n,2*a[i])-a;
		// 	ll la=i+(n-ub);
		// 	ans=min(ans,la);
		// }
		// cout<<ans;


//Method 2pointer
		ll ans=LONG_MIN;
		ll p=0,q=0;
		while(q<n)
		{
			if(2*a[p]>=a[q])
			{
				ans=max(ans,q-p+1);
				q++;	
			}
			else
			{
				p++;
			}
		}
		cout<<n-ans;

	return 0;
}