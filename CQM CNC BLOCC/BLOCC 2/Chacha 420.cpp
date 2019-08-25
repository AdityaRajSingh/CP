#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef unsigned long long int ull;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define sz(a) (ll)((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()
#define trvect(c,i) for(vector<ll>::iterator i = (c).begin(); i != (c).end(); i++)
#define trset(c,i) for(set<ll>::iterator i = (c).begin(); i != (c).end(); i++)
#define trmap(c,i) for(map<ll,ll>::iterator i = (c).begin(); i != (c).end(); i++)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define clr(c) (c).clear()
#define res(c,n) (c).reserve(n)
#define cres(c,n) (c).clear(),(c).resize(n)
#define ff first
#define ss second
#define mk make_pair
#define sq(a) (a)*(a)
#define cube(a) (a)*(a)*(a)
#define cnti(x) (__builtin_popcount(x)) //number of set bits in x
#define cntl(x) (__builtin_popcountll(x))


 int main()
{
    #ifndef ONLINE_JUDGE
        freopen("F:\\input.txt","r",stdin);
        freopen("F:\\output.txt","w",stdout);
    #endif
//////////////////////////////////////////////////////////////////////
ll n,q,x,ai;
//ll a[1000009];
ll c[1000009]={0};

//rep(i,0,1000009)
  //  a[i]=0;


cin>>n>>q;

rep(i,0,n)
{
    cin>>ai;
    c[ai]++;
}


rep(i,0,q)
{
cin>>x;
cout<<c[x];
}    

//////////////////////////////////////////////////////////////////////
    #ifndef ONLINE_JUDGE
        cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif


    return 0;
}