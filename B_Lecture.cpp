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
lli n,k;
cin>>n>>k;
string arr[k];
string arr1[k];
for(lli i=0;i<k;i++)
cin>>arr[i]>>arr1[i];

for(lli i=0;i<n;i++)
{
    string x;
    cin>>x;
    for(lli i=0;i<k;i++)
    if(arr[i]==x)
    {
        if(arr[i].size()<=arr1[i].size())
        cout<<arr[i]<<" ";
        else cout<<arr1[i]<<" ";
    }
}
return 0;
}