#include<bits/stdc++.h>
#define MOD 1000000007
#define inf 7*1e18
#define ninf -1*1e18
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
ll n ,q;
cin>> n >> q;
map<int,int> r , c;
set<int> fr , fc;
for(int i=1;i<=n;i++) fr.insert(i) , fc.insert(i);
while(q--)
{
    int t;
    cin>> t;
    if(t==1)
    {
        int rr , cc;
        cin>> rr >> cc;
        r[rr]++ , c[cc]++;
        fr.erase(rr) , fc.erase(cc);
    }
    else if(t==2)
    {
        int rr , cc;
        cin>> rr >> cc;
        r[rr]-- , c[cc]--;
        if(r[rr]==0) fr.insert(rr) ;
        if(c[cc]==0) fc.insert(cc);
    }
    else{
        int x1 , y1 , x2 , y2 ;
        cin>> x1 >> y1 >> x2 >> y2;
        auto it=fr.lower_bound(x1) ;
        auto it2=fr.lower_bound(x2);
        if(it==fr.end() and it2==fr.end())
        {
            cout<< "Yes" << nline;
            continue;
        }
        else if(*it2!=x2 and *it>x2)
        {
            cout<< "Yes" << nline;
            continue;
        }
        it=fc.lower_bound(y1);
        it2=fc.lower_bound(y2);
        if(it==fc.end() and it2==fc.end())
        {
            cout<< "Yes" << nline;
            continue;
        }
        else if(*it2!=y2 and *it>y2) {
            cout<< "Yes" << nline;
            continue;
        }
        cout<< "No" << nline;
        




    }

}






return 0;
}