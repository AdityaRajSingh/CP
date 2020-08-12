#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	
//////////////////////////////////////////////////////////////////////
	
stack<int> stac;
stack<char> sym;
string s;
cin>>s;
cout<<s<<endl;
//int flag=0;
for(int i=0;i<s.length();i++)
{
/*	if(s[i]=='(')
	{
		flag=1;
	}*/
	if(isdigit(s[i]))
	{
		stac.push(s[i]-'0');
	}
	 else if(s[i]=='+' || s[i]=='-')
	{

		sym.push(s[i]);
	}
	 else if(s[i]=='*' )
	{

		int q=stac.top();
		stac.pop();
		i++;
		stac.push( ( (s[i])-'0') *q);
	}
	 else if(s[i]=='/' )
	{
		cout<<stac.top()<<endl;
		int q=stac.top();
		stac.pop();
		i++;
		stac.push(q/ ( (s[i]) -'0') );

	}

}

while(!sym.empty())
{


		int a=stac.top();
		stac.pop();

		
		int b=stac.top();
		stac.pop();



	char topsym=sym.top();
	if(topsym == '+')
	{	
		stac.push(a+b);

	}
	if(topsym == '-')
	{	
		stac.push(b-a);
	}
	sym.pop();
}
cout<<"Ans= "<<stac.top()<<endl;

//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}