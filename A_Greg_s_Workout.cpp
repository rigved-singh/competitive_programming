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
int n;
cin>>n;
int arr[n+1];
for(int i=0;i<n;i++)
cin>>arr[i];
int b=0,c=0,ba=0;
for(int i=0;i<n;i++)
{
    if(i%3==0) c+=arr[i];
    else if(i%3==1) b+=arr[i];
    else if(i%3==2) ba+=arr[i];
}
int mx=max(b,c);
mx=max(ba,mx);
if(mx==b) cout<<"biceps"<<endl;
else if(mx==c) cout<<"chest"<<endl;
else if(mx==ba) cout<<"back"<<endl;

return 0;
}