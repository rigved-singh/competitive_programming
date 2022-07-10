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
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt1=0 , cnt2=0;
        int chan1=5 , chan2=5;
        int ans=9;
        
        for(int i=0;i<9;i++)
        {
            if(i%2==0){
                if(s[i]!='0')
                cnt1++;
                chan1--;
            }
            else {
               if(s[i]=='1') cnt2++;
                chan2--;
            }
            
            if(cnt1>cnt2 +chan2) ans=min(ans,i);
            
            if(cnt2 > cnt1 +chan1) ans=min(ans,i);
            
        }
        cnt1=0 , cnt2=0 , chan1=5 , chan2=5;
        for(int i=0;i<9;i++)
        {
            if(i%2==0){
                cnt1+=s[i]=='1';
                chan1--;
            }
            else {
                cnt2+=s[i]!='0';
                chan2--;
            } 
            if(cnt1> cnt2 + chan2) ans=min(ans,i);
            
            if(cnt2 > cnt1 + chan1) ans=min(ans,i);
            
        }
        cout<< ans +1 <<endl;
    }
return 0;
}