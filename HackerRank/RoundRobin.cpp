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

struct process
{
	int id;
	int arrival_time;
	int burst_time;
};


bool comp(process a, process b)
{
	return a.arrival_time<b.arrival_time;
}




int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll n;
	cin>>n;
	process a[n];
	rep(i,0,n)
	{
		a[i].id=i+1;
		cin>>a[i].arrival_time;
	}
	rep(i,0,n)
	{
		cin>>a[i].burst_time;
		
	}
	

	//sort(a,a+n,comp);

	// rep(i,0,n)
	// {
	// 	cout<<a[i].id<<"\t"<<a[i].arrival_time<<" "<<a[i].burst_time<<endl;
	// }

	ll quantum;
	cin>>quantum;

	
	ll i=0;
	ll t=a[i].arrival_time;

	queue<process> q;

	while(a[i].arrival_time<=t && i<n)
		{
			q.push(a[i]);
			i++;
		}

	while(!q.empty())
	{
		
		t+=quantum;
		queue<process> q2;
		while(!q.empty())
		{
			
			q.front().burst_time=max((ll)0,q.front().burst_time-quantum);

			cout<<q.front().id<<" ";

			if(q.front().burst_time)
				q2.push(q.front());
			q.pop();
		}

		

		while(a[i].arrival_time<=t && i<n)
		{
			q.push(a[i]);
			i++;
		}

		while(!q2.empty())
		{
				q.push(q2.front());
			q2.pop();
		}


		
	}



	return 0;
}