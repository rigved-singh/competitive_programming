#include <bits/stdc++.h>
#define MOD 1000000007
#define endl "\n"
#define lli long long int
#define ll unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define pii pair<int, int>
#define si set<int>
#define sll set<long long>
#define rep(i, s, n) for (ll i = s; i < n; i++)
#define cc                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;


ll get(ll a)
{
    while(a%2==0)
    a/=2;
    return a;
}
int main()
{
    cc
        ll t;
    cin >> t;
    while(t--)
    {
        ll a,b;
       
        
        cin>>a>>b;
         if(a>b)
        {
           a=a^b;
           b=a^b;
           a=a^b;
            
        }
        ll r=get(a);
       if(get(b)!=r)
       {
           cout<<-1<<endl;
       }
       else{
           b/=a;
           ll ans=0;
           
           while(b>=8)
           b/=8 , ++ans;
           if(b>1) ++ans;
           cout<<ans<<endl;
       }

    }

    return 0;
}