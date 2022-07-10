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
int ans=0;
int mn=INT_MAX;
vector<int> arr;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    arr.pb(x);
}
for(int i=1;i<n-1;i++)
{
    if(arr[i+1]-arr[i-1]<mn)
    {
        mn=arr[i+1]-arr[i-1];
        ans=i;
    }
}

arr.erase(arr.begin()+ans);
 ans=0;
for(int i=0;i<n-1;i++)
{
    if(arr[i+1]-arr[i]>ans) ans=arr[i+1]-arr[i];

}



cout<<ans<<endl;
return 0;
}