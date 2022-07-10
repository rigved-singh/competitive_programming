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
 
 
 
int ar[1001][1001];
int prefix[1001][1001];

int main()
{
Bl_dem
int n , k;
cin>> n >> k;
for(int i=1;i<=n;i++){
    for(int j=1; j<=n;j++) 
    {
        char x;
        cin>> x;
        if(x=='.') ar[i][j]=0;
        else ar[i][j]=1;
prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+ar[i][j];
    }

}
while(k--)
{
    int a , b , c, d;
    cin>> a >> b >> c >> d;
    cout<<prefix[c][d]-prefix[c][b-1]- prefix[a-1][d]+prefix[a-1][b-1] << '\n';
}


return 0;
}