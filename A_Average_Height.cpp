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
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x&1) odd.pb(x);
        else even.pb(x);
    }
    for(auto e: odd) cout<<e<<" ";
    for(auto e: even) cout<<e<<" ";
    cout<<endl;
}
return 0;
}