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
    lli k;
    cin>>k;
    int ans=INT_MAX;
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            int sum=i+j;
            int a=i*100;
            int b=j*100;
            if(sum==0) continue;
            if(a%sum==0&&b%sum==0)
            {
                a/=sum;
                b/=sum;
                if(a==k&&b==100-k) ans=min(ans,sum);
            }
        }
    }
    cout<<ans<<endl;
}
return 0;
}