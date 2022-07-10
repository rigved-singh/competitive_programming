#include<bits/stdc++.h>
#define MOD 1000000007
#define endl "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define mp make_pair
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// EKMC kabhi memset mat use karna 
 //ll n ;
 //ll arr[1001][1001] ;
 // bool vis[1000001];
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
 return (a*b)/__gcd(a,b);
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
 cin>>tt;
 while(tt--)
 {
     string s,t;
     cin>>s>> t;
     int n=(int)s.size();
     int m=(int)t.size();
     bool found=false;
     for(int i=0;i<n;i++)
     {

         for(int j=0;j<n;j++)
         {

             bool ok=true;
             int ptr=0;
             for(int k=i;k<=j and ptr<m;k++)
             {
                 if(s[k]==t[ptr])
                 {
                     ++ptr;
                 }
                 else {
                     ok=false;
                     break;
                 }
            
             }
             if(ok==false) continue;
             if(ptr==m and ok) {
                 found=true;
                 break;
             }
             for(int k=j-1;k>=0 and ptr<m;k--)
             {
                 if(s[k]==t[ptr])
                 {
                     ++ptr;
                 }
                 else
                 {
                     ok=false;
                     break;
                 }
             }
             if(ok and ptr==m) 
             {
                 found=true;
                 break;
             }

         }
         if(found) break;
     }
     cout<< (found ? "YES" : "NO");
     cout<<endl;
 }
return 0;
}