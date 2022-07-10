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
int arr[n];
rep(i,0,n) cin>>arr[i];
ll p=1;
while((p*(p+1)/2)<k)
{
    p++;

}
p--;
k-=(p*p+p)/2;
k--;
cout<<arr[k]<<endl;
return 0;
}