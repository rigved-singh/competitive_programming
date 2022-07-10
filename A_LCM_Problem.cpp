#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vlli vector<long long int>
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define irep(i,n) for(auto it=m.begin(),it!=m.end();it++) 
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
lli t;
cin>>t;
while(t--)
{
    lli l,r;
    cin>>l>>r;
    int flag=1;
    if(l*2>r) cout<<-1<<" "<<-1<<endl;
    else{
    for(ll i=l;i<=l+(r-l)/2;i++)
    {
        if(i*2<=r) 
        {
            cout<<i<<" "<<i*2<<endl;
            flag=0;
            break;

        }
    }
    if(flag) cout<<-1<<" "<<-1<<endl;
    }
    
}
return 0;
}