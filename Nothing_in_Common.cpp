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
int t;
cin>>t;
while(t--)
{
    si s;
    long n,m;
    cin>>n>>m;
    for(long i=0;i<n;i++)
    {
        long x;
        cin>>x;
        s.insert(x);
    }
    for(long i=0;i<m;i++)
    {
        long x;
        cin>>x;
        s.insert(x);
    }
    cout<<n+m-s.size()<<endl;
}
return 0;
}