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
lli p(lli a,lli b)
{
    lli res=1;
    while(b>0)
    {
        if(b%2==0)
        {
            a*=a;
            b/=2;
            a%=MOD;
        }
        else {
            res*=a;
            b--;
            res%=MOD;
        }
    }
    return res;
}

int main()
{
cc
lli t;
cin>>t;
while(t--)
{
    lli n;
    cin>>n;
    n--;
    lli ans=p(2,n);
    cout<<ans<<endl;
    
}
return 0;
}