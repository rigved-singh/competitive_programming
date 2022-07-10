#include<bits/stdc++.h>
#define MOD 1000000007
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
int t;
cin>>t;
while(t--)
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll arr[5];
    rep(i,0,5) cin>>arr[i];
    int flag=1;
    if(arr[0]>a)
    {
        flag=0;

    }
    else {
        a-=arr[0];
    }
    if(arr[1]>b)
    {
        flag=0;
    }
    else {
        b-=arr[1];
    }
    if(arr[2]>c)
    {
        flag=0;
    }
    else {
        c-=arr[2];
    }
    if(arr[3]>a+c)
    {
        flag=0;
    }
    else {
        ll k=a;
        a-=min(a,arr[3]);

        arr[3]-=min(arr[3],k);
    ll m=c;
        c-=min(arr[3],c);
        arr[3]-=min(m,arr[3]);
        
    }
    if(arr[4]>b+c)
    {
        flag=0;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}