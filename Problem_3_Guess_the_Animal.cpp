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
 
vector<string> chars[100];
    int count(int i , int j)
    {
        int cnt=0;
        vector<string> v1=chars[i];
        vector<string> v2=chars[j];
        for(auto e : v1)
        {
            for(auto d: v2) if(e==d) cnt++;
        }
        return cnt;
    }
 
int main()
{
Bl_dem
freopen("guess.in","r",stdin);
freopen("guess.out","w",stdout);
int n;
cin >> n;
    int largest=0;
for(int i=0;i<n;i++) {
    string s;
    cin>> s;
    int k ;
    cin>> k;
    for(int j=0;j<k;j++)
    {
        string temp; cin>> temp;
        chars[i].pb(temp);
    }
}
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++) largest=max(largest,count(i,j));

    cout<< largest +1 ;
return 0;
}