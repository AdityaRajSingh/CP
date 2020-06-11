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

struct node { 
	string sym; 
	ld pro; 
	ll array[20]; 
	ll top; 
} p[20]; 

typedef struct node node; 
void rec(ll l, ll h, node p[]) 
{ 
	ld q1 = 0, q2 = 0, d1 = 0, d2 = 0; 
	ll i, d, k, j; 
	if ((l + 1) == h || l == h || l > h) { 
		if (l == h || l > h) 
			return; 
		p[h].array[++(p[h].top)] = 0; 
		p[l].array[++(p[l].top)] = 1; 
		return; 
	} 
	else 
	{ 
		rep1(i,l,j-1)
			q1 = q1 + p[i].pro; 

		q2 = q2 + p[h].pro; 
		d1 = q1 - q2; 

		if (d1 < 0) 
			d1 = d1 * -1; 
		j = 2; 

		while (j != h - l + 1) 
		{ 
			k = h - j; 
			q1 = q2 = 0; 

			rep1(i,l,k)
				q1 = q1 + p[i].pro; 

			for (i = h; i > k; i--) 
				q2 = q2 + p[i].pro; 

			d2 = q1 - q2; 

			if (d2 < 0) 
				d2 = d2 * -1; 

			if (d2 >= d1) 
				break; 

			d1 = d2; 
			j++; 
		} 
		k++;

		rep1(i,l,k) 
			p[i].array[++(p[i].top)] = 1; 

		rep1(i,k+1,h)	
			p[i].array[++(p[i].top)] = 0; 

		rec(l, k, p); 
		rec(k + 1, h, p); 
	} 
} 

int main() 
{ 
	fast;
	ll n, i, j; 
	ld total = 0; 
	string ch; 
	node temp; 

	cout << "Enter number of symbols"<<endl; 
	n = 5; 

	cout << n << endl; 

	for (i = 0; i < n; i++) { 
		cout << "Enter the" << i + 1 << " : symbol"; 
		ch = (char)(65 + i); 
		cout << ch << endl; 
		p[i].sym += ch; 
	} 

	ld x[] = { 0.22, 0.28, 0.15, 0.30, 0.05 }; 
	rep(i,0,n)
	{ 
		cout << "\nEnter probability of " << p[i].sym << " : "; 
		cout << x[i] << endl; 
		p[i].pro = x[i]; 
		total = total + p[i].pro; 
		if (total > 1) { 
			cout << "Invalid. Enter new values"<<endl; 
			total = total - p[i].pro; 
			i--; 
		} 
	} 

	p[i].pro = 1 - total; 
	 
	 
	for (j = 1; j <= n - 1; j++) { 
		for (i = 0; i < n - 1; i++) { 
			if ((p[i].pro) > (p[i + 1].pro)) { 
				temp.pro = p[i].pro; 
				temp.sym = p[i].sym; 

				p[i].pro = p[i + 1].pro; 
				p[i].sym = p[i + 1].sym; 

				p[i + 1].pro = temp.pro; 
				p[i + 1].sym = temp.sym; 
			} 
		} 
	} 

	rep(i,0,n)
		p[i].top = -1; 

	rec(0, n - 1, p); 
		
		cout << "Symbol  Probability    Code"; 
		for (i = n - 1; i >= 0; i--) 
		{ 
			cout << "\n\t" << p[i].sym << "\t\t" << p[i].pro << "\t"; 
			for (j = 0; j <= p[i].top; j++) 
				cout << p[i].array[j]; 
		} 
	return 0; 
} 
