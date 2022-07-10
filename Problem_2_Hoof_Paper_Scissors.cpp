#include<bits/stdc++.h>
#define MOD 1000000007
#define nline "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define all(v) (v).begin(),(v).end()
#define vll vector<long long >
#define pb push_back
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
 template <typename G>
 void swap(G *a, G *b)
 {
 ll temp=a; a=b; b=a;
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
freopen("hps.in","r",stdin);
freopen("hps.out","w",stdout);
int n;
cin>> n;
vector<char> v(n);
vector<int> h(n+1,0) , p(n+1,0) , s(n+1, 0);
for(auto &e: v) cin>> e;
for(int i=0;i<n;i++)
{
    if(v[i]=='S') s[i+1]=1;
    else if(v[i]=='H') h[i+1]=1;
    else p[i+1]=1;
}
int ans =0 ;
for(int i=1;i<=n;i++)
{
    s[i]+=s[i-1];
    h[i]+=h[i-1];
    p[i]+=p[i-1];
}
for(int i=1;i<n+1;i++)
{
    int inmx=max(s[i], max(h[i],p[i]));
    int fimx=max(s[n]-s[i],max(h[n]-h[i],p[n]-p[i]));
    ans=max(ans, inmx+fimx);

}
cout<< ans;
return 0;
}