#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define irep(it,m) for(auto it=m.begin(),it!=m.end();it++) 
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
ll n,k;
cin>>n>>k;
vector<int> a(n),b(k);
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<k;i++) cin>>b[i];

int flag=0;

rep(i,0,n) 
{   
    if(a[i]==0)
    {
    if(i!=n-1)
    {
        if(a[i]==0&&a[i+1]==0)
        {
            flag=1;
            break;
        }
        else {

            if(i!=0)
            {
                    rep(j,0,k)
                    {
                        if(a[i-1]>=b[j]||a[i+1]<b[j])
                        {
                            flag=1;
                            break;
                        }
                    }
            }
            else
            {
                 rep(j,0,k)
                    {
                        if(a[i+1]<=b[j])
                        {
                            flag=1;
                            break;
                        }
                    }

            }
        }
    }
    else
    {
        rep(j,0,k)
                    {
                        if(a[i-1]>=b[j])
                        {
                            flag=1;
                            break;
                        }
                    }
    }
}
}
rep(i,0,n-1)
{
    if(a[i]>=a[i+1]&&a[i]!=0&&a[i+1]!=0) flag=1;
}
if(flag) cout<<"Yes"<<endl;
else cout<<"No";
return 0;
}