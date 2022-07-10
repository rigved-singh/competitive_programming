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
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
lli t;
cin>>t;
while(t--)
{
    lli n;
    cin>>n;
    lli arr[n];
    map<lli ,lli> ma;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
            ma[arr[i]]++;
    }
    ll x=0;
    for(auto it=ma.begin();it!=ma.end();it++)
    {
        if(it->second==1)
        {
            x=it->first;
            break;
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<i+1<<endl;
            break;
        }
    }
    
    
}
return 0;
}