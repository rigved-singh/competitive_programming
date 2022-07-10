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
int n,m;
cin>>n>>m;
ll a[n][m];
for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>a[i][j];

    ll b[n][m];
    vector< pair<int,int> >ans;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            b[i][j]=0;

             
                for(int i=0;i+1<n;i++)
                    {
                        for(int j=0;j+1<m;j++)
                        {
                            if(a[i][j]*a[i][j+1]*a[i+1][j]*a[i+1][j+1]>0)
                            {
                                ans.pb(make_pair(i+1,j+1));
                                b[i][j]=1;
                                b[i+1][j]=1;
                                b[i][j+1]=1;
                                b[i+1][j+1]=1;
                            }
                        }
                    }

                    int flag=1;
                    for(int i=0;i<n;i++)
                        for(int j=0;j<m;j++)
                        if(a[i][j]!=b[i][j]) 
                        {
                            flag=0;
                            break;
                        }
                            if(flag)
                            {
                                cout<<ans.size()<<endl;
                                for(auto e : ans) cout<<e.first<< " "<< e.second<<endl;
                            }
                                else cout<<"-1";
return 0;
}