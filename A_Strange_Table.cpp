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
 
    ll n,m,k;
    cin>>n>>m>>k;
    ll row=k%n;
    if(row==0) row=n;
    ll col=ceil(1.0*k/n);
   
    cout<<m*(row-1)+col<<endl;




}
return 0;
}