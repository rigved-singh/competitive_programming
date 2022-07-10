#include<bits/stdc++.h>
#define MOD 1000000007
#define nline "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define mp make_pair
#define sll set<long long>
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
/*---------------------------------------------------------------------------------------------
Problem related to maths -----> think gcd
CODE-------------------------------------------------------------------
---------------------------------------------------------------------------------------- */
 
 
 
void solve()
{
    ll n , m;
    cin>> n >>m;
    ll ar[n];
    for(auto &e: ar) cin>> e;
    set<pair<int,int>> s;
    ll res=0;
    for(int i=1;i<n;i++) ar[i]+=ar[i-1];
    for(ll i=0;i<n;i++)
    {
        if(m<ar[i])
        {
            auto it=s.lower_bound({ar[i]-m,0});
                if(it->first>=ar[i]-m)
             res=max(res,i-it->second);
            
        }else
        res=i+1;
         s.insert(make_pair(ar[i],i));

    }
    cout<< res << '\n';
    return ;
}
int main()
{
Bl_dem
ll t=1;
// cin>> t;
while(t--){
solve();
}
return 0;
}