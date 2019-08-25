#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)

struct node
{
	int start;
	int end;
};

bool f(node x, node y)
{
	return x.start<y.start;
}
////////////////////////////////////////////////////////////////////////////
void pairSets()
{
	set< pair<int , int> > s;
	s.insert({400,405});
	s.insert({250,300});
	s.insert({150,200});
	s.insert({0,149});

int q=200;
int k=0;
	for(auto i: s)
	{
		if(((i.first)<=q && q<i.second) || (i.first<q && q<=i.second))
			{
				cout<<"Present"<<endl;
				k=1;
			}

	}
	if(k==0)
	{
		cout<<"Not present"<<endl;
	}
}
//////////////////////////////////////////////////////////////////////////////////////
void mapDemo()
{
	map<int, int> a;
	a[1]=101;
	a[2]=102;
	a[3]=103;
	a[40]=400;

	map<char, int> cnt;
	string x="aditya raj singh";

	for(char c: x)
	{
		cnt[c]++;
	}

	cout<<cnt['r']<<cnt['z']<<endl;

	for(auto i=a.begin();i!=a.end();i++)
		cout<<(i->second)<<endl;
	
//problem
	for(auto i: a)
		cout<<(i.first)<<" "<<(i.second)<<endl;
}
void vectorDemo()
{
	// struct vector

 vector<node> v={{1,6},{2,5}};
sort(v.begin(),v.end(),f);

vector<node>::iterator i;

for(i=v.begin();i!=v.end();i++)
{
	cout<<(*i).start<< " ";
}

for(auto x: v)
{
	cout<<x.start<<" "<<x.end<<endl;
}


//normal vector functions
vector<int> a= {1,5,3,14};

cout<<a[1];

sort(a.begin(),a.end()); //o(nlogn)
cout<<a[1];

bool present=binary_search(a.begin(),a.end(),3);//array needs to be sorted
cout<<present;
cout<<binary_search(a.begin(),a.end(),4)<<endl;

a.push_back(100);
a.push_back(100);
a.push_back(100);
a.push_back(100);
a.push_back(123);


vector<int>::iterator it=lower_bound(a.begin(),a.end(),100);//>= greater than or equal to
vector<int>:: iterator it2=upper_bound(a.begin(),a.end(),100);//>  strictly greater than
 
 cout<<"difference="<<it2-it<<endl;


cout<<*it<<" "<<*it2<<endl;

cout<<(*a.begin())<<endl;


// sorting in decending order

 sort(a.begin(),a.end(),greater<int>());
// or
 //sort(a.begin(),a.end(),f);
 //printing
 for(auto q: a)
 	cout<<q<<endl;
}

///////////////////////////////////////////////////////////////////////////////

void setDemo()
{
set<int> s;
s.insert(3);
s.insert(-1);
s.insert(10);
s.insert(2);
s.insert(1);

cout<<"Elements are\n";
for(auto i: s)
	cout<<i<<endl;

cout<<endl;

cout<<"Last="<<*s.end()<<endl;


auto it=s.find(10);
if(it==s.end())
{
	
	cout<<"not present"<<endl;
	cout<<"Value of it"<<*it<<endl;
}
else
{
	cout<<"present"<<endl;
	cout<<"value of it"<<*it<<endl;
}
auto it4=s.upper_bound(-1);
auto it5=s.upper_bound(10);

cout<<endl<<*it4<<*it5<<endl;
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
//////////////////////////////////////////////////////////////////////

vectorDemo();
//setDemo();
//mapDemo();
//pairSets();


//////////////////////////////////////////////////////////////////////

	#ifndef ONLINE_JUDGE
    	cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif
	
	return 0;
}