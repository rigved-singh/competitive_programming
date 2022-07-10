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
lli ans=0;
lli n,k;
cin>>n>>k;
lli need[n];
lli avl[n];
for(lli i=0;i<n;i++)
cin>>need[i];

for(lli i=0;i<n;i++) cin>>avl[i];
int flag=1;
while(flag)
{
    for(lli i=0;i<n;i++)
    {
        if(avl[i]<need[i])
        {
            if(avl[i]+k<need[i]) 
            {
                flag=0;
            break;
            }
            else
            {
                    k-=need[i]-avl[i];
                    avl[i]=0;
            } 
        }
        else {
            avl[i]-=need[i];
        }
    }
    if(flag)
    ans++;
}
cout<<ans<<endl;

return 0;
}