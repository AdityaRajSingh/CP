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





ll _mergeSort(ll arr[], ll temp[], ll left, ll right); 
ll merge(ll arr[], ll temp[], ll left, ll mid, ll right); 

ll mergeSort(ll arr[], ll array_size) 
{ 
    ll temp[array_size]; 
    return _mergeSort(arr, temp, 0, array_size - 1); 
} 
  

ll _mergeSort(ll arr[], ll temp[], ll left, ll right) 
{ 
    ll mid, inv_count = 0; 
    if (right > left) { 
  
        mid = (right + left) / 2; 
  
        
        inv_count = _mergeSort(arr, temp, left, mid); 
        inv_count += _mergeSort(arr, temp, mid + 1, right); 
  
        
        inv_count += merge(arr, temp, left, mid + 1, right); 
    } 
    return inv_count; 
} 

ll merge(ll arr[], ll temp[], ll left, 
          ll mid, ll right) 
{ 
    ll i, j, k; 
    ll inv_count = 0; 
  
    i = left;
    j = mid; 
    k = left;
    while ((i <= mid - 1) && (j <= right)) { 
        if (arr[i] <= arr[j]) { 
            temp[k++] = arr[i++]; 
        } 
        else { 
            temp[k++] = arr[j++]; 
  
       
            inv_count = inv_count + (mid - i); 
        } 
    } 

    while (i <= mid - 1) 
        temp[k++] = arr[i++]; 
  
    while (j <= right) 
        temp[k++] = arr[j++]; 
  
    
    for (i = left; i <= right; i++) 
        arr[i] = temp[i]; 
  
    return inv_count; 
} 


ll getInvCount(ll arr[], ll n) 
{ 
    ll inv_count = 0; 
    for (ll i = 0; i < n - 1; i++) 
        for (ll j = i + 1; j < n; j++) 
            if (arr[i] > arr[j]) 
                inv_count++; 
  
    return inv_count; 
}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	ll t,n,k;
	cin>>t;
	while(t--)
	{
		ll ans=0;
		cin>>n>>k;
		ll a[n],ac[n];
		rep(i,0,n)
		{
			ll x;
			cin>>x;
			a[i]=x;
			ac[i]=x;
		}

		ll a1=mergeSort(a,n);
		ans+=a1*k;
		

		sort(ac,ac+n);
		ll s1=0;

		for(int i=1;i<n;i++)
		{
			if(ac[i]!=ac[i-1])
			{
				s1+=i;
			}
		}

		
		ll s2=((k-1)*(k)/2);
		ans+=s1*s2;
		cout<<ans<<endl;

	}	







////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}