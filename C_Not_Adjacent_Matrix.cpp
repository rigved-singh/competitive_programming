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
    if(n==1) cout<<1<<endl;
    else if(n==2) cout<<-1<<endl;
    else{
        lli k=pow(n,2);
        vector<int> p;
        for(lli i=1;i<=k;i+=2)
        {
            p.pb(i);
        }
        for(lli i=2;i<=k;i+=2)
        {
        p.pb(i);
        }
        lli j=0;
        for(lli i=0;i<k;i++)
        {
            cout<<p[i]<<" ";
            j++;
            if(j==n) {
                j=0;
                cout<<endl;
            }
        }
    }
}
return 0;
}