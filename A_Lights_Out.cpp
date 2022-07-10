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
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
//CODE-------------------------------------------------------------------
//---------------------------------------------------------------------------------------- 
 
 

int main()
{
cc
int a[5][5];
for(int i=1;i<=3;i++)
    for(int j=1;j<=3;j++)
    cin>>a[i][j];

    int b[5][5];
    for(int i=1;i<=3;i++)
        for(int j=1;j<=3;j++)
        b[i][j]=1;

            for(int i=1;i<=3;i++)
                for(int j=1;j<=3;j++)
                {
                    if(a[i][j]&1)
                    {
                        b[i+1][j]=abs(1-b[i+1][j]);
                        b[i][j]=abs(1-b[i][j]);
                        b[i-1][j]=abs(1-b[i-1][j]);
                        b[i][j+1]=abs(1-b[i][j+1]);
                        b[i][j-1]=abs(1-abs(b[i][j-1]));
                    }
                }
                    for(int i=1;i<=3;i++)
                       { for(int j=1;j<=3;j++) cout<<b[i][j];
                        cout<<endl;
                       }
return 0;
}