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
    if(n%2==0)
    {
        for(lli i=n;i>=1;i--)
    cout<<i<<" ";
    }
    else
    {
        for(lli i=n;i>=1;i--)
        {
            if(i==n/2+1) continue;
            cout<<i<<" ";
        }
        cout<<n/2+1;
    }
    cout<<endl;
}
return 0;
}