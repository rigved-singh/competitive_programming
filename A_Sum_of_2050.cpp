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
    lli x;
    cin>>x;
    if(x%2050!=0) cout<<-1<<endl;
    else {
        lli ans=0;
        lli k=x/2050;
        while(k>9)
        {
            ans+=k%10;
            k/=10;
        }
        cout<<ans+k<<endl;;

    }
}
return 0;
}