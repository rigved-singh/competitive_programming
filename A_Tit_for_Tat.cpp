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
    lli n,k;
    cin>>n>>k;
    lli arr[n];
    for(lli i=0;i<n;i++)
    cin>>arr[i];
    while(k)
    {
        for(lli i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                lli d=min(k,arr[i]);

                k-=min(k,arr[i]);
                arr[i]-=d;
                arr[n-1]+=d;
                if(k==0) break;

            }
        }
        k=0;
    }
    for(auto e: arr) cout<<e<<" ";
    cout<<endl;
}
return 0;
}