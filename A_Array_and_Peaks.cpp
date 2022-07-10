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
    lli n,k;
    cin>>n>>k;
    if(k==0)
    {
        for(int i=1;i<=n;i++) cout<<i<<" ";
        cout<<endl;
    }
    else
    {
        if(ceil(1.0*n/k)<=2) cout<<-1<<endl;
        else
        {
            int i=1;
            while(k)
            {
                for(;i<=n;i++)
                {
                    if(i&1) cout<<i<<" ";
                    else
                    {
                        cout<<i+1<<" "<<i<<" ";
                        i++;
                        k--;
                    }
                    if(k==0) {
                        i++;
                        break;
                    }
                }
            }
            for(;i<=n;i++) cout<<i<<" ";
            cout<<endl;
        }
    }
}
return 0;
}