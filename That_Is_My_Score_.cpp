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
    lli arr[12]{0};
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        int y;
        cin>>y;
        if(arr[x]<y) arr[x]=y;
    }
    int ans=0;
    for(int i=1;i<=8;i++)
    {
        ans+=arr[i];
    }
    cout<<ans<<endl;
}
return 0;
}