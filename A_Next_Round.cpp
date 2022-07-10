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
int n,k;
cin>>n>>k;
int arr[51];
for(int i=0;i<n;i++)
cin>>arr[i];
int ans=0;
for(int i=0;i<n;i++)
{
    if((arr[i]>=arr[k-1])&&(arr[i]>0)) ans++;

}
cout<<ans<<endl;
return 0;
}