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
lli max(lli a,lli b)
{
    if(a>b) return a;
    else return b;
}
int main()
{
cc
lli max(lli a,lli b);
lli t;
cin>>t;
while(t--)
{
    lli a,b,c,n;
    cin>>a>>b>>c>>n;
    lli mx=max(a,b);
    mx= max(mx,c);
    lli mn=abs(mx-a)+abs(mx-b)+abs(mx-c);
    if(n-mn<0) cout<<"NO"<<endl;
    else 
    if((n-mn)%3==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

return 0;
}