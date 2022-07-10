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
lli n,x;
cin>>n>>x;
lli arr[n];
for(lli i=0;i<n;i++) cin>>arr[i];
lli k;
cin>>k;
for(lli i=0;i<k;i++)
{
    lli y;
    cin>>y;
    x-=arr[y-1];

}
cout<<x+1<<endl;
return 0;
}