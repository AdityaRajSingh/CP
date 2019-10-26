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




ll highestPowerof2(ll n) 
{ 
   int p = (ll)log2(n); 
   return (ll)pow(2, p);  
} 





int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	


	// ll t,l,r;
	// cin>>t;
	// while(t--)
	// {
 //        cin>>l>>r;
 //        cout<<l<<" "<<r<<endl;
 //        ll la,lb,max=-1;
 //        for(ll i=l;i<=r;i++)
 //        {
 //            for(ll j=l;j<=i;j++)
 //            {
 //                if((i|j)>max)
 //                {
 //                    max=i|j;
 //                    la=i;
 //                    lb=j;
 //                }
 //            }
 //        }
 //        cout<<max<<" "<<la<<" "<<lb<<endl;
        
	// }











// 1000000000123 1000000123456
				  //549755813888
// 1000000192511 1000000061440 1000000061439


ll t,l,r;
	cin>>t;
	while(t--)
	{
        cin>>l>>r;

        if(l==r)
        {
        	cout<<(l)<<endl;
        }
        else
        {
        	ll k=0;
        	while(1)
	        {			
	        	// ll x=highestPowerof2(l);
    	     //    ll y=highestPowerof2(r);
    			

    			ll a=floor((1.0*log(l))/log(2));
    			ll b=floor((1.0*log(r))/log(2));

    			
    			//cout<<a<<" "<<b<<endl;

    	        if(a!=b)
    	        {
    	        	cout<<k+(1ll<<b)+(1ll<<b)-1<<endl;
    	        	break;
    	        }
    
    	        else
    	        {
    	        	ll c=1ll<<a;
    	        	l=l-c;
    	        	r=r-c;
    	        	k+=c;
    	        }

	        }
    	}
        
        
	}






////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}