//KEEP CALM AND READ QUESTIONS CAREFULLY
#include "bits/stdc++.h"
#define MOD 1000000007
#define ln "\n" 
#define ll long long
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define yes cout<<"YES"<<ln
#define no cout<<"NO"<<ln
#define fft ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
template<typename T>
T ceil( T x , T n)
 { 
T ans=0;
 ans=x/n; 
 if(x%n) ans++;
return ans;
}
ll cnt[100005]={0};
signed main()
{
  
  fft;
  ll tc=1; 
   while(tc--){
    string s; cin>>s;
    for(ll i=1; i<s.length(); i++){
          if(s[i]==s[i-1]){
            cnt[i]=1;
          }
    }
    for(ll i=1; i<=10004; i++){
        cnt[i]+=cnt[i-1];
    }
   ll m; cin>>m;
   while(m--){
       ll x,y; cin>>x>>y;
       cout<<cnt[y-1]-cnt[x-1]<<ln;
   } 
   }
return 0;
}
       