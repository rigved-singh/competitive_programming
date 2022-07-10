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
int n,m;
cin>>n>>m;
char high[m]{0};
string arr[n];
int ans=0;
rep(i,0,n)
{
    cin>>arr[i];
    rep(j,0,m)
    {
        high[j]=max(arr[i][j],high[j]);
    }

}
rep(i,0,n)
{
    rep(j,0,m)
    {
        if(arr[i][j]==high[j]) {
            ans++;
            break;
        }

    }
   
}
 cout<<ans<<endl;
return 0;
}