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
int t;
cin>>t;
while(t--)
{
    lli n,k;
    cin>>n>>k;
    k--;
    int coll=n/2;
    if(n&1) cout<<((k/coll)+k)%n+1<<endl;
    else cout<<k%n+1<<endl;
    
}
return 0;
}