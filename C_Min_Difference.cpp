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
    ll n , m;
    cin>> n >> m;
    ll a[n], b[m];
    for(int i=0;i<n;i++) cin>> a[i];
    for(int j=0;j<m;j++) cin >> b[j];
    sort(a,a+n);
    sort(b,b+m);
    int i=0;
    int j=0;
    ll mn=INT_MAX;
    while(i<n and j<m){
        
        mn=min(mn,abs(a[i]-b[j]));
        if(a[i]<b[j]) i++;
        else j++;
    }
    
    cout<< mn << nline;
return 0;
}