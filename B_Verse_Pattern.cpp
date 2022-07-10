#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
ll MOD = 998244353;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define endl 
 
 #define dbg(x) cout<<x<<ln 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main()
{
fast_cin();
ll n;
cin>>n;
ll a[n];
rep(i,n)
{
    cin>>a[i];
}
string s;
getline(cin,s);
rep(i,n)
{
   
    string s;
   getline(cin,s);
    ll count=0;
    for(ll i=0;i<s.length();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u' || s[i]=='y')
        {
            count++;
        }
    }
    
    if(count!=a[i])
    {
         cout<<"NO\n";
         return 0;
    } 
}        
cout<<"YES\n";
return 0;
}