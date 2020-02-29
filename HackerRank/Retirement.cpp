/* CPP program to print longest palindromic 
subsequence */
#include<bits/stdc++.h> 
using namespace std; 


#define rep(i,a,b) for(int i=a;i<b;i++)
#define mk make_pair


string lcs(string &X, string &Y) 
{ 
    int m = X.length(); 
    int n = Y.length(); 

    int L[m+1][n+1]; 


    for (int i=0; i<=m; i++) 
    { 
        for (int j=0; j<=n; j++) 
        { 
            if (i == 0 || j == 0) 
                L[i][j] = 0; 
            else if (X[i-1] == Y[j-1]) 
                L[i][j] = L[i-1][j-1] + 1; 
            else
                L[i][j] = max(L[i-1][j], L[i][j-1]); 
        } 
    } 


    int index = L[m][n]; 


    string lcs(index+1, '\0'); 


    int i = m, j = n; 
    while (i > 0 && j > 0) 
    { 

        if (X[i-1] == Y[j-1]) 
        { 
            lcs[index-1] = X[i-1]; 
            i--; 
            j--; 
            index--; 
        } 
        else if (L[i-1][j] > L[i][j-1]) 
            i--; 
        else
            j--; 
    } 

    return lcs; 
} 

string longestPalSubseq(string &str) 
{ 

    string rev = str; 
    reverse(rev.begin(), rev.end()); 
    return lcs(str, rev); 
} 

int main() 
{ 
	#ifndef ONLINE_JUDGE
		freopen("/home/aadi/Documents/input.txt", "r", stdin);
	    freopen("/home/aadi/Documents/output.txt", "w", stdout);
	#endif
    string str;
    cin>>str;
    string s= longestPalSubseq(str); 
    cout<<s<<endl;
    int l=s.length();
    int k=0;
    if(l%2==0)
    {
        rep(i,1,l/2)
        {
            if(s[i]==s[i-1])
            {
                k++;
            }
        }
        cout<<(l-2*k);
    }
    else
    {
        rep(i,1,l/2)
        {
            if(s[i]==s[i-1])
            {
                k++;
            }
        }
        cout<<((l-1)-2*k);
    }
    
    return 0; 
} 
