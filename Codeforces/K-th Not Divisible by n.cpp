#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
int i; 
    int *ptr = (int *) malloc(5 * sizeof(int)); 
 
    for (i=0; i<5; i++) 
        *(ptr + i) = i; 

    int a=5;
    int *p=&a;
    printf("%d \n", ++*p); 

 
    printf("%d ", *ptr++);  // 0
    printf("%d ", (*ptr)++); // 1
    printf("%d ", *ptr);   // 2
    printf("%d ", *++ptr); // 2
    printf("%d ", ++*ptr); // 3}
	return 0;
}