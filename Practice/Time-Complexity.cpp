#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
//////////////////////////////////////////////////////////////////////
	
long long i,j;
for(i=0;i<1e+8;i++)
j=i*i;


/*1.n=10^5- most used constraint in competitve programming , three types of complexity is allowed in these type of questions . fist O(n) ,O(nlogn) and O(nrootn) , you have to use fast io in O(nrootn) complexity.
2.n=10^6- only two types of complexity is allowed here, first O(n) and O(nlogn).
3.n>=10^9- you can use maximum of O(logn) complexity.
4.n=10^3- these kinds of questions requires O(n), O(n^2) or O(n^2logn) complexity.
5.n=10^2- you can use O(n), O(n^2), O(n^2logn), O(n^3) orO(n^3logn) complexity.
6.n<=20 - These question requires exponential complexity. mostly bitmasking questions are given in these ranges of n.

So basically use can use maximum of 10^8 iterations , but if you are using above 10^7 iterations make sure you io method is fast,sometimes simple io doesn’t fit in time limit.
and obviously O(1) works for all kind of constraints.
Hope it helps.*/






//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}