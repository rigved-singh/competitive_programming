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
    lli max=0;
    for(lli i=0;i<n;i++)
    cin>>arr[i];
    max=arr[0];
    lli ans=1;
    for(lli i=1;i<n;i++)
    {
        if(arr[i]<=max) {
            max=arr[i];ans++;
        }
    }
    cout<<ans<<endl;
}
return 0;
}