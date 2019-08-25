
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef unsigned long long int ull;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'

#define rep(i,a,b) for(ull i=a;i<b;i++)
ull a[1000009];

ull m=1000000007;


ull binpow (ull a, ull n) 
{
if (n == 0)
return 1;
if (n % 2 == 1)
{
ull b=binpow(a,n-1);
return ((b%m)*(a%m))%m;
}
else {
ull b = binpow (a, n/2);
return ((b%m) * (b%m))%m;
}
}



 int main()
{
    #ifndef ONLINE_JUDGE
        freopen("F:\\input.txt","r",stdin);
        freopen("F:\\output.txt","w",stdout);
    #endif
//////////////////////////////////////////////////////////////////////
ull t,n,x;
cin>>t;


rep(i,0,t)
{
    cin>>n>>x;
int p=0;
    for (ull i=2; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            
            if (n/i == i)
                {
                    a[p]=i;
                    p++;
                }
 
            else 
                {
                    a[p]=i; a[p+1]=n/i;
                    p=p+2;
                }
        }
    }

ull pro=n;

rep(i,0,p)
{
ull pr=binpow(a[i],x);
 pro=(pro*pr)%m;
}
cout<<pro<<endl;
  /*
rep(i,0,p)
{
    cout<<a[i]<<endl;
}
cout<<endl;
*/
}

//////////////////////////////////////////////////////////////////////
    #ifndef ONLINE_JUDGE
        cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif


    return 0;
}