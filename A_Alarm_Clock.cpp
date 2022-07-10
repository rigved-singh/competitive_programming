#include<bits/stdc++.h>
#define MOD 1000000007
#define endl "\n"
#define lli long long int
#define ll  unsigned long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
ll t;
cin>>t;
while(t--)
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    
    
    if(b>=a) cout<<b<<endl;
    else  
    {
        a-=b;
        if(c<=d) cout<<-1<<endl;
        else cout<<fixed<<setprecision(0)<<b+((ceil(1.0*a/(c-d))))*c<<endl;
    }
}
return 0;
}