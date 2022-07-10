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
    lli a,b;
    cin>>a>>b;
    int ans=0;
    int mxcount=0;
    for(int i=a;i<=b;i++)
    { 
        int count=0;
        for(int j=0;j<32;j++)
        {
            if(i&1<<j) count++;
        }
    if(count>mxcount){
        mxcount=count;
        ans=i;
    }
     
    }
    cout<<ans<<"\n";
}
return 0;
}