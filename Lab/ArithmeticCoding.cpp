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

string s;
vector< pair<char,ld> > probSequence;

ld arithmetic_encode(int c,ld l,ld h) 
{
    ld nl=l,nh=0;
    for(auto i:probSequence)
        {   
            nl+=(h-l)*i.second;
            if(s[c]==i.first)
                {
                    nh=nl;
                    nl-=(h-l)*i.second;
                    break;
                }
        }
        if(c+1>=s.size())
        {
            return nl;
        }
        return arithmetic_encode(++c,nl,nh);
}



int main()
{
    fast;
    
    cout<<"Enter the string"<<endl;
    cin>>s;
        vector<char> memoize(256,0);

        rep(i,0,s.size())
            memoize[s[i]]++;
        
        

        for(int i=0;i<memoize.size();i++)
        {
            if(memoize[i]>0)
            {
                pair<char,ld> p1=make_pair(memoize[i],(ld)memoize[i]/(ld)s.size());
                probSequence.push_back(p1);
            }
        }

    cout<<"Character Probabilities are:"<<endl;

    for(auto i:probSequence)
        cout<<i.first<<"\t"<<i.second<<endl;
    
    cout<<endl;
    cout<<"The arithmetic encoding is"<<endl;
    cout<<arithmetic_encode(0,0,1)<<endl;

    return 0;
}

