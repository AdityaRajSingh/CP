/******************************************
* AUTHOR : ADITYA RAJ SINGH *
******************************************/
#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int  lli;
typedef long double ld;


#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define pb push_back
#define cres(c,n) (c).clear(),(c).resize(n)
#define all(a) (a).begin(), (a).end()
#define ff first
#define ss second
#define mk make_pair


#include <iostream>  
using namespace std; 

 
 lli gcd(lli a, lli b)  
 {  
    if (a == 0 || b == 0)  
        return 0;  

    if (a == b)  
        return a;  
   
    if (a > b)  
        return gcd(a-b, b);  
    return gcd(a, b-a);  
 } 
  
   

  lli lcm(lli a, lli b)  
 {  
    return (a*b)/gcd(a, b);  
 }  




int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
////////////////////////////////////////////////////////////////////////////////////////////
	
	lli t,n,a,b,k;
	cin>>t;
	lli cl=0;
	while(t--)
	{
	cin>>n>>a>>b>>k;
	lli ca=n/a;
	lli cb=n/b;
	lli l=lcm(a,b);

	
	 cl=n/l;

	if((ca-cl)>=k || (cb-cl)>=k)
	{
		cout<<"Win"<<endl;
	}
	else
	{
		cout<<"Lose"<<endl;	
	}
}








////////////////////////////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}