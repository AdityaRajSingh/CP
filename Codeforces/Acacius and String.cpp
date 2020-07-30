														//ADITYA RAJ SINGH//
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
//ll M=1e+9;
ll power(ll x, ll y, ll M)  
{   ll res = 1; x = x % M; if (x == 0) return 0;  while (y > 0)  {    if (y & 1)  res = (res*x) % M;    y = y>>1; x = (x*x) % M;  }  return res;  } 
ll modInverse(ll a, ll M) 
{   ll g = __gcd(a, M); if (g != 1) return -1; else return(power(a, M-2, M)); } 


int countFreq(string pat, string txt) 
{ 
    int M = pat.length(); 
    int N = txt.length(); 
    int res = 0; 
    
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) 
    {  
        /* For current index i, check for  
           pattern match */
        int j; 
        for (j = 0; j < M; j++) 
            if (txt[i+j] != pat[j]) 
                break; 
   
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1] 
        if (j == M)   
        { 
           res++; 
           j = 0; 
        } 
    } 
    return res; 
}

int countFreq2(string &pat, string &txt) 
{ 
    int M = pat.length();
    string pat2="???????";
    int N = txt.length(); 
    
    
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) 
    {  
        /* For current index i, check for  
           pattern match */
        int j; 
        for (j = 0; j < M; j++) 
            if (txt[i+j] != pat[j] && txt[i+j] != pat2[j]) 
                break; 
   
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1] 
        if (j == M)   
        { 
        	string d=txt;
        	for (j = 0; j < M; j++) 
        	{
        		d[i+j]=pat[j];
        	}
        	//cout<<"Hello  "<<d<<endl;
        	if(countFreq(pat,d)==1)
        	{
        		txt=d;
        		return 1;
        	}
        	else
        	{	
        		j = 0; 
        	}
           
        } 
    } 
    return 0; 
}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n; 
	cin>>t;
	while(t--)
	{
		cin>>n;
		string pat="abacaba";

		string txt;
		cin>>txt;
		ll x=countFreq(pat,txt);
		if(x==0)
		{
			ll x=countFreq2(pat,txt);
			if(x==1)
			{
				cout<<"YES"<<endl;
				rep(i,0,n)
				{
					if(txt[i]=='?')
						cout<<'z';
					else
						cout<<txt[i];
				}
				cout<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		if(x==1)
		{
			cout<<"YES"<<endl;
			rep(i,0,n)
			{
				if(txt[i]=='?')
					cout<<'z';
				else
					cout<<txt[i];
			}
			cout<<endl;
		}
		if(x>1)
		{
			cout<<"NO"<<endl;
		}


	}	
	return 0;
}