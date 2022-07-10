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
    ll n;
    cin>> n;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin>> v[i];
    vector<ll> mnans(n);
    vector<ll> mxans(n);
    int ar[200001]{0};
    ll mn=1;
    for(int i=0;i<n;i++)
    {
        if(ar[v[i]]==1)
        {
            mnans[i]=mn;
            mn++;
            
        }
        else{
            ar[v[i]]++;
             mnans[i]=v[i];
            if(v[i]==mn) mn++;
        }
        while(ar[mn]) mn++;
    }
    int arb[200001]{0};
    ll mx=v[0]-1;
    ll c=v[0];
   arb[0]=1;
      for(int i=0;i<n;i++)
    {  
        c=max(c,v[i]);
        if(arb[mx]) mx=c-1;
        if(arb[v[i]])
        {
            mxans[i]=mx;
           mx--;
        }
        else{
            arb[v[i]]++;
            mxans[i]=v[i];

        }
    }
    for(auto e: mnans) cout<< e << " ";
    cout<< endl;
    for(auto e: mxans) cout<<e << " ";
    cout<< endl;
}
return 0;
}