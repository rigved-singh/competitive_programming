#include<bits/stdc++.h>
#include<unordered_set>
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
int n;
cin>>n;
int arr[51];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i=n-1;i>=1;i--)
{
    for(int j=i-1;j>=0;j--)
    {
        if(arr[j]==arr[i]) arr[j]=-1;
    }
}
int count=0;
for(int i=0;i<n;i++)
if(arr[i]!=-1) count++;

cout<<count<<endl;
for(int i=0;i<n;i++)
if(arr[i]!=-1) cout<<arr[i]<<" ";


}