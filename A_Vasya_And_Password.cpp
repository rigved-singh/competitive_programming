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
ll t=1;
cin>> t;
while(t--){
string s;
cin>> s;
ll n=(int)s.size();
bool l=false , u=false , di=false;
for(int i=0; i<n ;i++)
{
    if(isalpha(s[i]))
    {
        if(isupper(s[i])) u=true;
        else l=true;
    }
    else di=true;
} 
if((l and u) and di) cout<< s << nline;
else{
   
    bool tl =false  , tu=false , tdi=false;
    if(((l^u)^di)==false)
    {
        if( l==false ) {
           for(int i=0;i<n;i++)
           {
               if(isdigit(s[i]))
               {
                   if(tdi)
                   {
                       s[i]='a';
                        cout<< s << nline;
                       break;
                   }
                   else tdi=true;
               }
               else {
                   if(tu)
                   {
                       s[i]='a';
                        cout<< s << nline;
                       break;
                   }
                   else tu=true;
               }
           } 

        }
        else if(u==false)
        {
            for(int i=0;i<n;i++)
            {
                if(isdigit(s[i]))
                {
                    if(tdi)
                    {
                        s[i]='A';

                        cout<< s << nline;
                        break;
                    }
                    else tdi=true;
                }
                else {
                    if(tl)
                    {
                        s[i]='A';
                        cout<< s << nline;
                        break;
                    }
                    else tl=true;
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++) 
            {
                if(isupper(s[i]))
                {
                    if(tu)
                    {
                    s[i]='1';
                    cout<< s << nline;
                    break;
                    }
                    else tu=true;
                } 
                else{
                    if(tl) 
                    {
                        s[i]='1';
                        cout<< s << nline;
                        break;
                    }
                    else tl=true;
                }
                
            }
        }
    }
    else{
           for(int i=0;i<n-2;i++)
           {
               if(isdigit(s[i+2]))
               {
                   s[i]='a';
                   s[i+1]='A';
                   cout<< s << nline;
                   break;
               }
               else if(isupper(s[i+2]))
               {
                   s[i]='a';
                   s[i+1]='1';
                   cout<< s << nline;
                   break;
               }
               else{
                   s[i]='A';
                   s[i+1]='1';
                   cout<< s << nline;
                   break;
               }
           }
    }

}
}
return 0;
}