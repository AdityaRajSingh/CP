#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef unsigned long long int ull;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'

#define rep(i,a,b) for(ll i=a;i<=b;i++)

ll fib(ll n)
{
 
  ll f[n+2];
  ll i;
 

  f[0] = 0;
  f[1] = 1;
 
  for (i = 2; i <= n; i++)
  {
      f[i] = f[i-1] + f[i-2];
  }
 
  return f[n];
}

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
 

int f(ll i, ll j)
{
ll fi=fib(i);
ll fj=fib(j);
if(gcd(fi,fj)==1)
return 1;
else 
return 0;
}






 int main()
{
    #ifndef ONLINE_JUDGE
        freopen("F:\\input.txt","r",stdin);
        freopen("F:\\output.txt","w",stdout);
    #endif
//////////////////////////////////////////////////////////////////////
ll t,n;
cin>>t;

rep(g,0,t-1)
{
cin>>n;
ll s=0;
rep(i,1,n)
{
    rep(j,i,n)
    {
        s=s+f(i,j);
        //cout<<i<<" "<<j<<endl;
    }
}
cout<<s<<endl;
}

//////////////////////////////////////////////////////////////////////
    #ifndef ONLINE_JUDGE
        cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif


    return 0;
}