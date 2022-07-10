#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vlli vector<long long int>
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
long t;
cin>>t;
    while(t--)
        {
                lli a,b,n;
                cin>>a>>b>>n;
                ll tot=0;
                ll mx=0;
               ll at[n];
               ll hp[n];
               int cnt=0;
               int pos=0;
               for(ll i=0;i<n;i++)
               {
                   cin>>at[i];
               }
            for(ll i=0;i<n;i++)
               {
                   cin>>hp[i];
                   mx=max(mx,at[i]);
                   tot+=ceil(1.0*hp[i]/a)*at[i];
               }
               if(tot-mx<b)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
return 0;
}