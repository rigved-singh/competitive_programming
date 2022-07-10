#include<bits/stdc++.h>
#define MOD 1000000007
#define endl "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define irep(it,m) for(auto it=m.begin(),it!=m.end();it++) 
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll arr[n];
    ll mn=INT_MAX;
    ll mx=INT_MIN;
    rep(i,0,n) {
        cin>>arr[i];
        mn=min(mn,arr[i]);
        mx=max(mx,arr[i]);
    }
    ll ans1=0,ans2=0,ans3=0;
    bool minn=true;
    bool maxx=true;
    int i=0;
    while(minn||maxx)
    {
        if(arr[i]==mn) minn=false;
        if(arr[i]==mx) maxx=false;
        i++;
    }
    ans1=i;
    int j=n-1;
    minn=true;
    maxx=true;
  int cnt=0;
     while(minn||maxx)
    {
        if(arr[j]==mn) minn=false;
        if(arr[j]==mx) maxx=false;
        j--; cnt++;
    }
ans2=cnt;
cnt=0;
i=0;
while(1)
{
    if(arr[i]==mx||arr[i]==mn) {
        cnt++ ;
        break;
    }
    else {
        cnt++;
        i++;

    }
}
ans3=cnt;
i=n-1;
cnt=0;
while(1)
{
    if(arr[i]==mx||arr[i]==mn) {
        cnt++ ;
        break;
    }
    else {
        cnt++;
        i--;

    }
}
    ans3+=cnt;
ll ans=min(ans1,ans2);
ans=min(ans,ans3);
cout<<ans<<endl;
}
return 0;
}