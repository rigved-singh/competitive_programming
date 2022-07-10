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
ll t;
cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;

    ll arr[n];

    rep(i,0,n) 
    cin>>arr[i];

    bool ch=true;
    sort(arr,arr+n);
    if(k==0) cout<<n<<endl;
    else {
    rep(i,0,n)
    {
        if(arr[i]!=i) {
            ch=false;
            break;
            }
    }
    if(ch) cout<<n+k<<endl;
    else
    {
        ll mex=0;
        rep(i,0,n) 
        {
            if(arr[i]!=i)
           { mex=i;
            break;
           }
        }
    
        ll p=ceil(1.0*(arr[n-1]+mex)/2);
        ll check=false;
        rep(i,0,n) 
        {
            if(arr[i]==p){
                    check=true;
                    break;
            } 
        }
        if(check) cout<<n<<endl;
        else cout<<n+1<<endl;
    }
    }
}

return 0;
}