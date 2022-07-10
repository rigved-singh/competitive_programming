#include<bits/stdc++.h>
#define MOD 1000000007
#define lli unsigned long long int
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
    lli n,q;
    cin>>n>>q;
    lli arr[n];
    lli score[n]={0};
    lli ans=0;
    for(lli i=0;i<n;i++)
    {
        
        cin>>arr[i];
        if(i>0)
        score[i]=arr[i]&score[i-1];
        else score[i]=arr[i];
        
        ans^=score[i];
    }
    cout<<ans<<endl;
    while(q--)
    {
        lli x,v;
        cin>>x>>v;
        arr[x]=v;
        for(lli i=x;i<n;i++)
        {
             if(i>0)
            score[i]=arr[i]&score[i-1];
        else score[i]=arr[i];
        ans^=score[i];
        }
        cout<<ans<<endl;
    }
}
return 0;
}