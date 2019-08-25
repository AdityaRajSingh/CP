#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)

char a[4]={'a','b','c','d'};

bool powerOfTwo(int n)
{
if(!(n&(n-1)) && n!=0)
return true;
else
return false;
}

int noOfOnes(int n)
{
	int c=0;
	while(n>0)
	{
		n=n&(n-1);
		c++;
	}
	return c;
}

bool ithSetBit(int n, int i){
	if(n&(1<<i))
	{
		return true;
	}
	return false;
}

void possibleSubsets(int n)
{
	cout<<"possibleSubsets="<<endl;
	int i,j;
for(i=0;i<pow(2,n);i++)
{
	for(j=0;j<n;j++)
	{
		if(i&(1<<j))
			cout<<a[j];
		else
			cout<<"-";
	}
	cout<<endl;
}
}

void largestPowerOfTwo(int n)
{

	int c=noOfOnes(n);
	if(c==0)
	{
		cout<<"Not Possible"<<endl;
		return;
	}
	while(c>1)
	{
		
		n=n&(n-1);
		c=noOfOnes(n);
	}
	cout<<"Power="<<n<<endl;
	return ;

}
Tricks--
x^(x&x-1)=rightmost 1
x&(-x)=rightmost 1;
x| (1<<n)= sets the 
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
//////////////////////////////////////////////////////////////////////
int n,i;
cin>>n>>i;
/*cout<<"Power Of Two="<<powerOfTwo(n)<<endl;
cout<<"noOfOnes="<<noOfOnes(n)<<endl;
cout<<"ithSetBit="<<ithSetBit(n,i)<<endl;
possibleSubsets(n);*/
largestPowerOfTwo(n);

//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}