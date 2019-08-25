
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef unsigned long long int ull;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'

#define rep(i,a,b) for(ll i=a;i<b;i++)

ll fact(ll n, ll p)
{
    if (n >= p)
        return 0;
 
    ll result = 1;
    for (ll i = 1; i <= n; i++)
        result = (result * i) % p;
 
    return result;
}

bool magic(ll n) 
{
    if(fact(n-1,n)== n-1)
        return true;
    return false;
}

void solution(ll a, ll b, ll n)
{
    // traverse for all possible values
    for (ll i = 0; i * a <= n; i++) {
 
        // check if it is satisfying the equation
        if ((n - (i * a)) % b == 0)
         {
           cout<<"Haanji"<<endl;
            cout<<i<<" "<<(n - (i * a)) / b<<endl;
            return;
        }
    }
 
    cout<<"Naaji"<<endl;
}


 int main()
{
    #ifndef ONLINE_JUDGE
        freopen("F:\\input.txt","r",stdin);
        freopen("F:\\output.txt","w",stdout);
    #endif

        fast;
//////////////////////////////////////////////////////////////////////
ll t,n,c,a,b;
cin>>t;

rep(i,0,t)
{
    cin>>n>>c;
    a = magic(n) ? n+1 : n ;
    b = magic(n-1) ? n+1 : n ;
    solution(a,b,c);

}

//////////////////////////////////////////////////////////////////////
    #ifndef ONLINE_JUDGE
        cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif


    return 0;
}