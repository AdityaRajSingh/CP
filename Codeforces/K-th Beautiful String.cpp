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



const int MAX_CHAR = 26; 
const int MAX_FACT = 20; 
ll fact[MAX_FACT]; 



void precomputeFactorials() 
{ 
    fact[0] = 1; 
    for (int i = 1; i < MAX_FACT; i++) 
        fact[i] = fact[i - 1] * i; 
} 
  
// function for nth permutation 
void nPermute(int n1, int n) 
{ 
    precomputeFactorials(); 
  
    // length of given string 
    int len = n1;
  
    // Count frequencies of all 
    // characters 
    int freq[2] = { 0 }; 
    // for (int i = 0; i < len; i++) 
    //     freq[str[i] - 'a']++; 
  	freq[0]=n1-2;
  	freq[1]=2;

    // out string for output string 
    char out[100005]; 
  
    // iterate till sum equals n 
    int sum = 0; 
    int k = 0; 
  
    // We update both n and sum in this 
    // loop. 
    while (sum != n) { 
  
        sum = 0; 
        // check for characters present in freq[] 
        for (int i = 0; i < MAX_CHAR; i++) { 
            // Remove character 
            freq[i]--; 
  
            // calculate sum after fixing 
            // a particuar char 
            int xsum = fact[len - 1 - k]; 
            for (int j = 0; j < MAX_CHAR; j++) 
                xsum /= fact[freq[j]]; 
            sum += xsum; 
  
            // if sum > n fix that char as 
            // present char and update sum 
            // and required nth after fixing 
            // char at that position 
            if (sum >= n) { 
                out[k++] = i + 'a'; 
                n -= (sum - xsum); 
                break; 
            } 
  
            // if sum < n, add character back 
            if (sum < n) 
                freq[i]++; 
        } 
    } 
  
    // if sum == n means this char will provide its 
    // greatest permutation as nth permutation 
    for (int i=MAX_CHAR-1; k < len && i >= 0; i--) 
        if (freq[i]) { 
            out[k++] = i + 'a'; 
            freq[i++]--; 
        } 
  
    // append string termination 
    // character and print result 
    out[k] = '\0'; 
    cout << out; 
} 


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
	fast;
	
	ll t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		string s="";
		char str[n];
		rep(i,0,n-2)
		{
			str[i]+='a';
		}
		str[n-2]='b';
		str[n-1]='b';
		s+="bb";
		nPermute(n,k);
	}	






	
	return 0;
}