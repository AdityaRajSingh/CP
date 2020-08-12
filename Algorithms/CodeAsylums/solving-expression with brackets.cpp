#include<bits/stdc++.h>
using namespace std;

int cal(int a, int b, char c)
{
	if(c=='+')
	{
		cout<<"a+b="<<a+b<<endl;
		return b+a;
	}
	else if(c=='-')
	{
		cout<<"a-b="<<a-b<<endl;
		return b-a;
	}
	else if(c=='*'){
		cout<<"a*b="<<a*b<<endl;
		return b*a;
	}
	else if(c=='/'){
		cout<<"a/b="<<a/b<<endl;
		return b/a;
	}
	else{
		cout<<"else of calculation"<<endl;
		return 0;
	}
	
}


int priority(char a)
{
	if(a=='+' || a=='-')
		return 1;
	if(a=='*' || a=='/')
		return 2;
	cout<<"else of priority"<<endl;
	return 0;
}
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

for(int i=0;i<s.length();i++)
{
	if(s[i]=='(')
	{
		sym.push('(');
	}
	else if(isdigit(s[i]))
	{
		stac.push(s[i]-'0');
	}
	else if(s[i]==')')
	{
		while(sym.top()!='(')
		{
			int a=stac.top();
			stac.pop();
			int b=stac.top();
			stac.pop();
			char c=sym.top();
			sym.pop();
			stac.push(cal(a,b,sym.top()));
		}
		sym.pop();
	}

	else 
	{
		while(!sym.empty() && priority(s[i])<=priority(sym.top()))
		{
			int a=stac.top();
			stac.pop();
			int b=stac.top();
			stac.pop();
			char c=sym.top();
			sym.pop();
			stac.push(cal(a,b,c));
			

		}
		sym.push(s[i]);
	}


}

while(!sym.empty())
{
			int a=stac.top();
			stac.pop();
			int b=stac.top();
			stac.pop();
			char c=sym.top();
			sym.pop();
			stac.push(cal(a,b,c));
			
}



cout<<"Ans= "<<stac.top()<<endl;

//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}