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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>> n;
       vector<int> v,v2,v3;
       
       for(int i=0;i<n;i++) {
           int x;
           cin>> x;
           v.pb(x);
           v2.pb(x);
       }
       sort(v2.begin(),v2.end());
    bool ok=true;
       for(int i=0;i<n;i++)
       {
           int pos=lower_bound(v2.begin(),v2.end(),v[i])-v2.begin();
           int pos2=upper_bound(v2.begin(),v2.end(),v[i])-v2.begin();
           pos2-=1;
           if(i<pos || i>pos2)
           {
              
               v3.pb(v[i]);
               
           }
       }
      int gc=v2[0];
      for(auto e: v3){
          if(gcd(e,gc)!=gc){
              ok=false;
              break;
          }
      }

       if(ok) cout<<"YES";
       else cout<< "NO";
       cout<< '\n';

    }
return 0;
}