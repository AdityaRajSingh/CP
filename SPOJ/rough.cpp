#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,m;
ll a[1000005];

ll fun(ll height){
 ll remain=0LL;
 for(ll i=1;i<=n;i++){
  if(height<=a[i]){
   remain+=a[i]-height;
  }
 }
 return remain;
}
int main(){
 
 scanf("%lld%lld",&n,&m);
 ll maxh=-1;
 for(ll i=1;i<=n;i++){
   scanf("%lld",&a[i]);
   maxh=max(a[i],maxh);
   }
 
 
   ll low=0;ll high=maxh;ll ans=0;
      while(low<=high){
    ll mid=(low+high)/2;
 
    if(fun(mid)>=m){
     ans=mid;
     low=mid+1;
    }
     if(fun(mid)<m){
     high=mid-1;// opposite
    }
  
    
   }
   printf("%lld\n",ans);
 
}