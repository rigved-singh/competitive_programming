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
lli t;
cin>>t;
while(t--)
{
    lli ans=0,a,b,c,r;
    cin>>a>>b>>c>>r;
    lli L=c-r;
    lli R=c+r;
    lli st=max(L,min(a,b));
    lli en=min(R,max(a,b));
    cout<<abs(b-a)-max((long long int )0,(en-st))<<endl; 
}
return 0;
}