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
ll t=1;
cin>> t;
while(t--){
ll a , b , c;
cin>> a >> b >> c;
if(a==b+c || b==a+c || c==a+b) cout<< "YES";
else if(a%2==0 and b==c ) cout<< "YES";
else if(b%2==0 and a==c)cout<< "YES";
else if(c%2==0 and a==b) cout<< "YES";
else cout<< "NO";
cout<< endl;
}
return 0;
}