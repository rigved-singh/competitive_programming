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
 
bool notprime(int i)
{
    for(int j=2;j*j<=i;j++) if(i%j==0) return true;
    return false;
} 
 
int main()
{
Bl_dem
ll t=1;
cin>> t;
while(t--){
int n;
cin>> n;
string s;
cin>> s;
bool ok=false;
string k ={'2','3','5','7'};
for(auto e: s) 
if(find(all(k),e)==k.end())
{
    cout<< 1<< nline;
    cout<< e <<nline;
        ok=true;
        break;
} 
if(ok) 
    continue;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++) 
    {
        string temp={s[i],s[j]};
        ll k=stoi(temp);
        if(notprime(k))
        {
            cout<< 2<< nline;
            cout<< k << nline;
            ok=true;
            break;
        }
        if(ok) break;
    }
    if(ok)break;
}
if(ok) continue;
cout<< -1 << nline;
}
return 0;
}

// 1
// 4
// 2
// 55
// 1
// 9
// 1
// 1
// 2
// 57
// 1
// 1
// 2
// 57
// 1
// 1
// 2
// 27
// 2
// 72

// 1
// 4
// 2
// 55
// 1
// 9
// 1
// 1
// 2
// 57
// 1
// 1
// 2
// 57
// 1
// 1
// 2
// 27
// 1
// 1


// 5
// 23274
// 3
// 553
// 6
// 229232
// 21
// 551535317535153531351
// 7
// 5737373
// 3
// 211
// 2
// 57
// 3
// 213
// 5
// 23727
// 5
// 27177
