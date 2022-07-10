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
    int n;
    cin>> n;
    string s;
    cin>> s;
    if(is_sorted(s.begin(),s.end()))
    {
        cout<< 0 << '\n';
        continue;
    } 
    int k=count(s.begin(),s.end(),'1');
    int ans=0;
    vector<int> idx;
    vector<vector<int>> last;
    int i=0 , j=n-1;
    while(i<j and k)
    {
        if(s[i]=='1' and s[j]=='0')
        {
            
            int cnt=0;
            while(s[i]=='1' and s[j]=='0' and i<n and j>=0)
            {
                idx.pb(i+1) ;
            idx.pb(j+1);
            i++; j--;
            cnt++;
            }
            
            k-=cnt;
        }
         if(s[i]=='0')
        {
           while(s[i]!='1' and i<n) i++;
        }
        if(s[j]!='0'  && j>=0) j--; 

        
    }
    if(idx.size())
    cout<<  1<< '\n';
    else cout<< 0 << '\n';
    
    cout<< idx.size()<< ' ';
    sort(all(idx)) ;
    for(auto e: idx) cout<< e << ' ';
    cout<< '\n';
    

    
}
return 0;
}