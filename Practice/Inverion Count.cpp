#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)

ll ans=0;
void merge(ll arr[], ll l, ll m, ll r)
{
    
    ll la[m-l+1];
     ll ra[r-m];
     
     for(ll i=l;i<=m;i++)
     {
         la[i-l]=arr[i];
     }
     for(ll i=m+1;i<=r;i++)
     {
         ra[i-m-1]=arr[i];
     }
     ll i=0, j=0 , k=l;
     
     while(i< (m-l+1) && j< (r-m) )
     {
         if(la[i]<=ra[j])
         {
             arr[k++]=la[i++];
         }
         else
         {
             arr[k++]=ra[j++];
             ans+=m-i+1;
         }
     }
     while(i< (m-l+1) )
     {
             arr[k++]=la[i++];
     }
     while (j< (r-m) )
     {
             arr[k++]=ra[j++];
     }
     
    return;   
}



void mergeSort(ll arr[], ll l, ll r)
{
    ll ans=0;
    if(l<r)
    {
        ll m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
    return;
}


int main()
{
        #ifndef ONLINE_JUDGE
        freopen("/home/aadi/Documents/input.txt", "r", stdin);
        freopen("/home/aadi/Documents/output.txt", "w", stdout);
    #endif
	fast;
	
	ll t,n; cin>>t;
	while(t--)
	{
		cin>>n;
		ll arr[n];
		rep(i,0,n)
			cin>>arr[i];
		mergeSort(arr,0,n-1);
        cout<<ans<<endl;
	}	
	return 0;
}