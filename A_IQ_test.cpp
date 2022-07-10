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
lli a;
cin>>a;
int even=0,odd=0;
int arr[1001];
for(int i=0;i<a;i++)
{
    cin>>arr[i];
if(arr[i]&1) odd++;
else even++;
}
if(even>odd)
{
    for(int i=0;i<a;i++)
    if(arr[i]&1) cout<<i+1<<endl;
}else
if(even<odd)
{
    for(int i=0;i<a;i++)
    if(!(arr[i]&1)) cout<<i+1<<endl;
}
return 0;
}