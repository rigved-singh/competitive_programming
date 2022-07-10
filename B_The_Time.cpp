#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define irep(it,m) for(auto it=m.begin(),it!=m.end();it++) 
// #define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
// cc
string s;
cin>>s;
int hrs=(s[0]-48)*10+(s[1]-48);
int min=(s[3]-48)*10+(s[4]-48);
int n;
cin>>n;
 hrs+=(min+n)/60;
min+=n;
min%=60;
hrs%=24;


 printf("%02d:%02d\n", hrs, min);

return 0;
}