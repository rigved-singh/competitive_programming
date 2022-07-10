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
 char ar[55][55];
  int dp[55][55];
  int n , m;
 int solve(int k , int st , int en,  string s="")
 {
     
     if(ar[st][en]=='H') return 0;
     if(st==n and en==n) {
         int cnt=0;
         for(int i=0;i<s.size()-1;i++)
         {
             if(s[i]!=s[i+1]) k--;
         }
         if(k>=0) return 1;
         else return 0;
     }
     int ret =solve(k,st+1,en,s+'R') + solve(k,st,en+1,s+'D');
     return ret ;
 }
 
int main()
{
Bl_dem
ll t=1;
cin>> t;
while(t--){
    for(int i=0;i<55;i++) for(int j=0;j<55;j++) ar[i][j]='H';
   
    cin>>n >> m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) cin>> ar[i][j];
    }
    
    int ans=solve(m, 1 , 1);
    cout<< ans << '\n';
}
return 0;
}