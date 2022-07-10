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
lli n;
    cin>>n;
    lli arr[100000]={0};
    for(lli i=0;i<n;i++)
    cin>>arr[i];
int t;
cin>>t;
while(t--)
{
    
    int ans=0;
    lli m;
    cin>>m;
    while(m)
    {
    for(lli i=0;i<=n-m;i++)
    {
        lli r=0;
        for(lli j=i;j<i+m;j++)
        {
            
        }
        ans+=r;
    }
    cout<<ans<<endl;
    m--;
    }
cout<<ans<<endl;
}
return 0;
}