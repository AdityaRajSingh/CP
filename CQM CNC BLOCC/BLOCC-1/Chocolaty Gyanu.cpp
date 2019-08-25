#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;
typedef std::vector<ld> vld;
typedef std::vector< std::vector<ll> > vvll;
typedef std::pair<ll, ll> pll;
typedef std::vector< pll > vpll;
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



int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
     
    
    int base = 1;
     
    int len = num.length();
    for (int i=len-1;i>=0;i--)
    {
        if (num[i] == '1')        
            dec_value += base;
        base = base * 2;
    }
     
    return dec_value;
}



 int main()
{
    #ifndef ONLINE_JUDGE
        freopen("F:\\input.txt","r",stdin);
        freopen("F:\\output.txt","w",stdout);
    #endif
//////////////////////////////////////////////////////////////////////
int q,l,r;
string n;
getline(cin, n);

string a,s="";
getline(cin, a);


for(int i=0;i<a.length();i++)
{
    if(a[i]=='0' || a[i]=='1')
s=s+a[i];
}

cout<<s<<endl;

cin>>q;
cout<<q;

int c=0;
int tot[1000000];
for(int i=0;i<q;i++)
{
    cin>>l>>r;
    cout<<l<<r<<endl;
    cout<<(l-1)<<(r-l+1)<<endl;
    //string num=s.substr((l-1),(r-l+1));
    //cout<<num<<endl;
   // c=c+(binaryToDecimal(num));
    //tot[i]=c;
}
/*
for(int i=0;i<q;i++)
{
if(tot[i]%2==0 || tot[i]==0)
    cout<<"Sad"<<endl;
else
    cout<<"Happy"<<endl;
}
*/
//////////////////////////////////////////////////////////////////////
    #ifndef ONLINE_JUDGE
        cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif


    return 0;
}