#include<bits/stdc++.h>
#define MOD 1000000007
#define nline "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define all(v) (v).begin(),(v).end()
#define vll vector<long long >
#define pb push_back
#define fs first
#define sc second
#define ppb pop_back
#define ppf pop_front
#define pf push_front
#define vvll vector<vector<ll>>
#define vvc vector<vector<char>>
#define pii pair<int,int>
#define pll pair<long long , long long >
#define si set<int>
#define mp make_pair
#define sll set<long long>
#define vpll vector<pair<ll,ll> > 
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int dx[]{1,0,0,-1};
int dy[]{0,1,-1,0};
template <typename T>
T tpow(T x, T y)
{ ll res=1 ; while(y) { if(y%2==0) x*x ; res*=x;y--;} return res;}
ll mod_pow(ll a, ll b, ll mod = (ll)(1e9 + 7)){ll res = 1; while(b){if(b&1){res = (res*a)%mod;} b /=2; a=(a*a)%mod;} return (res%mod) ;}
 template<typename T>
T ceil( T x , T n)
 { 
T ans=0;
 ans=x/n; 
 if(x%n) ans++;
return ans;
}
template<typename P>
 P Lcm (P a, P b)
 {
 return (a*b)/gcd(a,b);
}
 template<typename T>
T gcd(T a, T b)
{
if(b==0) return a;
return gcd(b,a%b);
 } 
//COMBINOTORICS ---------------------------------------------------------------------------------
ll fact(ll n) { if(n<=1) return 1; return n*fact(n-1);}
ll ncr(ll n , ll r){ return fact(n)/(fact(r)*fact(n-r));}
ll npr(ll n , ll r) {return fact(n)/fact(n-r);}
/*---------------------------------------------------------------------------------------------
Problem related to maths -----> think gcd
CODE-------------------------------------------------------------------
---------------------------------------------------------------------------------------- */
 
 
 
int main()
{
Bl_dem

string s;
cin>> s;
string inarr;
cin>> inarr;
vector<string> v;
for(int i=0;i<inarr.size();i++)
{
    string temp="";
    while(inarr[i]!=',' and i<inarr.size()) temp+=inarr[i++];
    v.pb(temp);
} 
string ans="";
map<char, vector<int>> m;
for(int i=0;i<s.size();i++)
{
    if(m[s[i]].size()>0) continue;
    for(int j=0;j<s.size();j++) if(s[j]==s[i]) m[s[i]].pb(j);
}

for(auto &e: m)
{
    set<string> st;
     for(auto k: e.sc) st.insert(v[k]);
     bool check=true;

  if(st.size()==1 ){
      for(int i=0;i<v.size();i++) {
          if(v[i]==*st.begin()) if(find(all(m[e.fs]),i)==m[e.fs].end()) {
              check=false;
              break;
          }
      }
      if(check) ans+=e.fs;
  } 
}
if(ans=="") cout<< "NA";
else cout<< ans ;


return 0;
}