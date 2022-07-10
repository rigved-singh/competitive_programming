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
lli x,y;
cin >> x >> y;
lli n;
cin>>n;
n--;
lli ans=0;
lli arr[]={x,y,y-x,-1*x,-1*y,-1*y+x};

ans=n%6;
ans=arr[ans];
while(ans<0)
{
    ans+=MOD;
}
cout<<ans%MOD;
return 0;
}