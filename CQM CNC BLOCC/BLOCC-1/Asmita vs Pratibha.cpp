#include<bits/stdc++.h>
using namespace std;

typedef long int li;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

li arr[8000000];
int lsearch( li n, li x)
{
    li p=0;
    for (li i = 0; i < n; i++)
        if (arr[i] == x)
         {
            p++;
            break;
        }

    return p;
}

int bsearch( li n, li x)
{
li first=0,last=n-1,a=0;

while(first<=last )
{
li mid=((first+last)/2);

if(arr[mid]==x)
    {
        a++;
        break;
    }

else if(x>arr[mid])
    {
        a++;
        first=mid+1;
    }

else
    {
        a++;
        last=mid-1;
    }
}
return a;
}


 int main()
{
    #ifndef ONLINE_JUDGE
        freopen("F:\\input.txt","r",stdin);
        freopen("F:\\output.txt","w",stdout);
    #endif
//////////////////////////////////////////////////////////////////////
li n;
scanf("%li",n);
for(li i=0;i<n;i++)
{
   scanf("%li",arr[i]); 
}
for(li i=0;i<n;i++)
{
li p=lsearch(n,arr[i]);
li a=bsearch(n,arr[i]);
printf("%li ",(p-a));
}
//////////////////////////////////////////////////////////////////////
    #ifndef ONLINE_JUDGE
        cout<<endl<<"Time Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    #endif


    return 0;
}