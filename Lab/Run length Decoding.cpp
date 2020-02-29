#include <bits/stdc++.h> 
#define MAX_TREE_HT 256 
using namespace std; 

typedef long long ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mk make_pair

int main() {

    
    ll n;
    map<string,char> mp;
    
    char c;
    string x;
    string w,ans="";
    
    
    cin >> n;
    rep(i,0,n)
    {
       cin>>c;
       cin>>x;
       cout<<c<<"->"<<x<<endl;
       mp[x]=c;
    }
    

    cin>>w;
    
    
    cout<<"Encoded String"<<endl;
    cout<<w<<endl;
    
    int l=w.length();
    string d="";
    rep(i,0,l)
    {
        d=d+w[i];
        if(mp.find(d) != mp.end())
        {
            ans+=mp[d];
            d="";
        }

    }
    cout<<"Decoded String"<<endl;
    cout<<ans<<endl;
    
    string ans1;
    int l1=ans.length();
    int k=1;
    
    ll i;
    for(i=1;i<l1;i++)
    {
        if(ans[i]==ans[i-1])
        {
            k++;
        }
        else
        {
            ans1+=ans[i-1];
            string q=to_string(k);
            ans1+=q;
            k=1;
        }
    }
    ans1+=ans[i-1];
            string q=to_string(k);
            ans1+=q;
    
    cout<<ans1<<endl;
    

    return 0; 
}