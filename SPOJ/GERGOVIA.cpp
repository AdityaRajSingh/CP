#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mk make_pair



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll n,x;
	cin>>n;
	while(n)
	{
		queue <ll> q;
		vector<ll> arr;
		rep(i,0,n)
		{
			cin>>x;
			arr.pb(x);
		}

		ll g=1;			
		q.push(arr[0]);
		ll ans=0;
		while(!q.empty() && g<=arr.size())
		{

				while(!q.empty() && q.front()==0)
				{
					q.pop();
				}



			if(q.front()*q.back()<0)
			{
				//cout<<"front="<<q.front()<<" back="<<q.back()<<endl;
				ans+=(q.size()-1)*min(abs(q.front()),abs(q.back()));
				//cout<<"ans="<<ans<<endl;
				if(abs(q.front())<=abs(q.back()))
				{
					q.back()=q.back()+q.front();
					q.front()=0;
				}
				else
				{
					q.front()=q.front()+q.back();
					q.back()=0;
				}
			}
			else
			{
				///cout<<"front="<<q.front()<<" back="<<q.back()<<endl;
				x=arr[g];
				q.push(x);
				g++;
			}
		}
		cout<<ans<<endl;

		cin>>n;

	}	






	
	return 0;
}