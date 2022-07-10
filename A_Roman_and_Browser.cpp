#include<bits/stdc++.h>
#define MOD 1000000007
#define endl "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define irep(it,m) for(auto it=m.begin(),it!=m.end();it++) 
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
ll n,k;
cin>>n>>k;
ll diff=0;
int te=0,so=0;
ll idx=0;
int arr[n];
rep(i,0,n) 
{
cin>>arr[i];
if (arr[i]==1) te++;
else so++;
}

cout<<endl;
for(int i=0;i<n;i++)
{
    int tte=te;
    int tso=so;
    for(int j=i;j<n;j+=k)
    {
        if(arr[j]==1) tte--;
        else tso--;

    }
    for(int j=i;j>=0;j-=k)
    {
       if(arr[j]==1) tte--;
        else tso--;
    }
    if(arr[i]==1) tte++;
    else tso++;

    if(abs(tte-tso)> diff)
    {
        diff=abs(tte-tso);
        idx=i;
    }

}
cout<<diff;
return 0;
}
// 1 test 
// -1 social media
// galat scene ho rahe h 