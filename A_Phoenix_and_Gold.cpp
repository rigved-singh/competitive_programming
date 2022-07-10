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
    lli n,x;
    cin>>n>>x;
    lli arr[n];
    lli sum=0;
    for(lli i=0;i<n;i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    vi a;
    lli curr=0;
    int flag=1;
    while(curr!=sum&&flag)
    {flag=0;
        for(lli i=0;i<n;i++)
        {
            if(curr+arr[i]!=x&&arr[i]!=-1)
            {
                a.pb(arr[i]);
                curr+=arr[i];
                arr[i]=-1;
                flag=1;
                
            }
        }
    }
    if(curr==sum){
         cout<<"YES"<<endl;
         for(int e: a) cout<<e<<" ";
         cout<<endl;
    }
    else cout<<"NO"<<endl;
}
return 0;
}