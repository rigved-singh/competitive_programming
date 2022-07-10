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
 
 
 
int main()
{
Bl_dem
    int tt;
    cin>> tt;
    while(tt--){
        ll n;
        cin>> n;
        vector<ll> a(n) , b(n);
        for(auto &e : a) cin>> e;
        for(auto &e: b ) cin>> e;
        
        ll mna=*min_element(a.begin(),a.end());
        ll mnb=*min_element(b.begin(),b.end());
    
        ll ans=0;
                   for(int i=0;i<n;i++){
                        ll k=min(a[i]-mna, b[i]-mnb);
                        ans+=k;
                        a[i]-=k;
                        b[i]-=k;
                        ans+=a[i]-mna;
                        ans+=b[i]-mnb;
                        
                    

                }
    cout<< ans <<"\n";
    }
return 0;
}