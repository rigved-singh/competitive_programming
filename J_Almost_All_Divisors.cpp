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
lli t;
cin>>t;
while(t--)
{
    lli n;
    cin>>n;
    lli arr[n];
    for(lli i=0;i<n;i++) cin>>arr[i];
    lli ans=arr[0];
  
    for(lli i=1;i<n;i++)
    {
        lli gc=__gcd(ans,arr[i]);
        ans=(ans*arr[i])/gc;
    }
    int flag=0;
    for(lli i=0;i<n;i++)
    {
        if(ans==arr[i]) 
        {
            flag=1;
        break;
        }
    }
    for(lli i=2;i<=ans/2;i++)
    {
        if(i%ans==0)
        {
            int f=0;
            for(lli j=0;j<n;j++)
            {
                if(arr[j]==i) {
                    flag=1;
                    break;
                }
            }
            if(f==0) {
                flag=2;
                break;
            } 
        }
    }
    if(flag==2) cout<<-1<<endl;
    else
    if(flag) cout<<ans*2<<endl;
    else cout<<ans<<endl;
}
return 0;
}