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
    string a,b;
    cin>>a>>b;
        int i=0;
            while(a[i]=='0' ) 
            {
                i++;
            }
            a.erase(0,i);
            i=0;

                while(b[i]=='0' ) {
                   i++;
                }
                b.erase(0,i);

                    if(a.size()<b.size()) cout<<'<';
                    else if(a.size()>b.size()) cout<<'>';
                    else if(a.size()==b.size())
                    {
                       int p=0;
                        for(ll i=0;i<a.size();i++)
                        {
                            if(a[i]>b[i]) 
                            {
                                p=1;
                                break;
                            }
                            else if(a[i]<b[i]) 
                            {
                               p=2;
                               break;
                            }
                        }
                        if(p==1) cout<<'>';
                        else if(p==2) cout<<'<';
                        else cout<<'=';
                    }


return 0;
}