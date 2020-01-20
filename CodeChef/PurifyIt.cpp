#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
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
	
	ll t;
	cin>>t;
	while(t--)
	{
		stack<char> s;
		string n;
		cin>>n;
		ll l=n.size();

		ll a0[1005]={0};
		ll a1[1005]={0};

		ll z;
		rep(i,0,l)
		{
			z=1;
			if(n[i]=='0')
			{
				rep(j,i+1,l)
				{
					if(n[j]=='0')
					{
						z++;
						if(j==l-1)
						{
							a0[z]++;
							i=j;
						}
						
					}
					else
					{
						a0[z]++;
						z=1;
						i=j;					
						break;
					}
				}
			}
		}

			


		rep(i,0,l)
		{
			 z=1;
			if(n[i]=='1')
			{
				rep(j,i+1,l)
				{
					if(n[j]=='1')
					{
						z++;
						if(j==l-1)
						{
							a1[z]++;
							i=j;
							//cout<<z<<endl;
						}
					}
					else
					{
						a1[z]++;
						//cout<<z<<endl;
						z=1;
						i=j;						
						break;
					}
				}
			}
		}



		// cout<<"no of 0s"<<endl;
		// rep(i,0,1005)
		// {
		// 	if(a0[i]>0)
		// 	{
		// 		cout<<i<<" "<<a0[i]<<endl;
		// 	}
		// }
		// cout<<"no of 1s"<<endl;
		// 		rep(i,0,1005)
		// {
		// 	if(a1[i]>0)
		// 	{
		// 		cout<<i<<" "<<a1[i]<<endl;
		// 	}
		// }


		rep(i,0,l)
		{
			if(s.empty())
			{
				s.push(n[i]);
			}
			else
			{
				if(s.top()!=n[i])
				{
					s.push(n[i]);
				}
			}
		}
		ll n0=0,n1=0;
		while(!s.empty())
		{
			if(s.top()=='0')
			{
				n0++;				
			}
			if(s.top()=='1')
			{
				n1++;				
			}
			s.pop();
		}
		 ll q=min(n0,n1);
		 char ele;


		 if(n1==n0)
		 {
		 	ele='2';
		 }
		 if(n1>n0)
		 {
		 	ele='0';
		 }
		 if(n1<n0)
		 {
		 	ele='1';
		 }




		 if(q==0)
		 {
		 	cout<<q<<endl;
		 }
		 else
		 {		 	
			 if(ele=='0')
			 {
			 	// cout<<"ele="<<0<<endl;
			 	ll c=0,ans=0;
			 	rep(i,1,1005)
			 	{
			 		if(a0[i]>0)
			 		{
			 			while(a0[i]>0 && c!=q-1)
			 			{
			 				ans+=i;
			 				c++;
			 				a0[i]--;
			 			}
			 		}
			 		if(c==q-1)
			 		{
			 			break;
			 		}
			 	}
			 	cout<<ans<<endl;

			 }
			 if(ele=='1')
			 {
			 	// cout<<"ele="<<1<<endl;
			 	ll c=0,ans=0;
			 	rep(i,1,1005)
			 	{
			 		if(a1[i]>0)
			 		{
			 			while(a1[i]>0 && c!=q-1)
			 			{
			 				ans+=i;
			 				c++;
			 				a1[i]--;
			 			}
			 		}
			 		if(c==q-1)
			 		{
			 			break;
			 		}
			 	}
			 	cout<<ans<<endl;

			 }
			 if(ele=='2')
			 {
			 	// cout<<"ele="<<2<<endl;
			 	ll c=0;
			 	ll ans0=0,ans1=0;
			 	rep(i,1,1005)
			 	{
			 		if(a0[i]>0)
			 		{
			 			while(a0[i]>0 && c!=q-1)
			 			{
			 				ans0+=i;
			 				c++;
			 				a0[i]--;
			 			}
			 		}
			 		if(c==q-1)
			 		{
			 			break;
			 		}
			 	}
			 	c=0;
			 	rep(i,1,1005)
			 	{
			 		if(a1[i]>0)
			 		{
			 			while(a1[i]>0 && c!=q-1)
			 			{
			 				ans1+=i;
			 				c++;
			 				a1[i]--;
			 			}
			 		}
			 		if(c==q-1)
			 		{
			 			break;
			 		}
			 	}
			 	cout<<min(ans0,ans1)<<endl;
			 }
			}


		 






		 //cout<<n<<endl;
		// cout<<"hi";
	}	






	
	return 0;
}