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
const ll maxN=1e3+10;
vll par(maxN,-1);
vll siz(maxN,0);
void make_set(int x)
{
par[x]=x;
   siz[x]=1;
}
int find_set(int v)
{
    if(v==par[v]) return v;
    return par[v]=find_set(par[v]);
} 
 void set_union(int u , int v)
 {
     int a=find_set(u);
     int b=find_set(v);
     if(siz[a]<siz[b]) swap(a,b);
     par[b]=a;
     siz[a]+=siz[b];
}
int main()
{
Bl_dem
ll n;
cin>>n;
vpll v(n);
ll cnt=0;
vpll re , in;
for(int i=1;i<=n;i++) make_set(i);
for(int i=0;i<n-1;i++) 
{
    int x, y;
    cin>> x >> y;
    v.pb(mp(x,y));
    v[i].fs=x ;
    v[i].sc=y;
    int a=find_set(x) ;
    int b=find_set(y);
    if(a==b)
    {
        cnt++;
        re.pb(mp(x,y));
    }
    else{
        set_union(x,y);
    }

}
for(int i=1;i<=n;i++)
{
    for(int j=i+1;j<=n;j++) {
        int a=find_set(i) ;
        int b=find_set(j);
        if(a!=b) 
        {
            in.pb(mp(i,j));
            set_union(i,j);
        }
    }
}
cout<< cnt << nline;
for(int i=0;i<in.size();i++)
{
    cout<< re[i].fs << " " << re[i].sc << " " << in[i].fs << " "  << in[i].sc;
    cout<<nline;
}

return 0;
}