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
        ll n , u , r , d , l ;
        cin>> n >> u >> r >> d >> l;
        bool ok=true;
        for(int i=1;i<=16;i++)
        {
            ok =true;
            int u1=u , r1=r , d1=d , l1=l;
            if(i&1)
            {
                u1--;
                l1--;

            }
            if(i&2)
            {
                u1--;
                r1--;
            }
            if(i&4) 
            {
                r1--;
                d1--;
            }
            if(i&8)
            {
                d1--;
                l1--;
            }
             vector<int> v={u1, r1, d1, l1};
             
             for(int i=0;i<4;i++)
             {
                 if(v[i]>=0 and v[i]<=n-2) continue;
                 else{
                     ok=false;
                     break;
                 } 
             }
             if(ok)
             {
                 cout<< "YES"<< '\n';
                 break;
             }
        }
        if(!ok) cout<< "NO"<< '\n';

       

}
return 0;
}