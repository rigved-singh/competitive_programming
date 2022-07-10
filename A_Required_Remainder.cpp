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
    ll x , y , n;
    cin>> x >> y >> n;
    ll k=(n/x)*x;
    if(k+y<=n) cout<< k+y << '\n';
    else cout<< k-x+y << '\n'; 
}

return 0;
}