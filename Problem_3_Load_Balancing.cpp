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
 
int X[101] , Y[101];
set<int> hf , vf; 
 
int main()
{
Bl_dem
ifstream fin("balancing.in");
ofstream fout("balancing.out");
int n , k;
fin>>n >> k;
for(int i=0;i<n;i++) {
    fin>> X[i] >> Y[i];
    hf.insert(X[i]+1) ;
    vf.insert(Y[i]+1);
}
int ans=INT_MAX;
for(auto e: hf){

for(auto d: vf){

int topleft=0 , topright=0 , bottomleft=0 , bottomright=0;
        for(int i=0;i<n;i++) {
            if(X[i]<e and Y[i]<d) bottomleft++;
            else
            if(X[i]>e and Y[i]<d) bottomright++;
            else 
            if(X[i]<e and Y[i]>d) topleft++;
            else
            if(X[i]>e and Y[i]>d) topright++;
            
           
        }
        ans=min(ans, max(max(topleft,topright),max(bottomleft,bottomright)));
}
}
fout<< ans;
return 0;
};
	