#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)




int main()
{

//////////////////////////////////////////////////////////////////////
    
int n;
cin>>n;
vector<int> h;  
for(int i=0;i<n;i++)
{
    int q;
    cin>>q;
    h.push_back(q);
}

    


int mini[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        mini[i][j]=1000000;
    }
}

for(int i=0;i<n;i++)
{
    int mrow=h[i];
    for(int j=i;j<n;j++)
    {
        mrow=min(h[j],mrow);
        mini[i][j]=mrow;
    }
} 


long mans=0;
    
for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            long p=(j-i+1)*mini[i][j];
            mans=max(p,mans);
        }

    }
    cout<<mans;




//////////////////////////////////////////////////////////////////////

    
    return 0;
}