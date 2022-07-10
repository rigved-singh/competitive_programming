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
int t;
cin>>t;
while(t--)
{
    int rt,rd,st,sd;
    vi rta,rda,sta,sda;
    cin>>rt;
    for(int i=0;i<rt;i++)
    {
        int x;
        cin>>x;
        rta.pb(x);
    }
    cin>>rd;
    for(int i=0;i<rd;i++)
    {
        int x;
        cin>>x;
        rda.pb(x);
    }
    cin>>st;
    for(int i=0;i<st;i++)
    {
        int x;
        cin>>x;
        sta.pb(x);
    }
    cin>>sd;
    for(int i=0;i<sd;i++)
    {
        int x;
        cin>>x;
        sda.pb(x);
    }
    int flag=0;
    for(int e: sta)
    {
        if(find(rta.begin(),rta.end(),e)==rta.end()){ flag=1;
        break;
        }
    }for(int e: sda)
    {
        if(find(rda.begin(),rda.end(),e)==rda.end()){ flag=1;
        break;
        }
        
    }
    if(flag) cout<<"no"<<endl;
        else cout<<"yes"<<endl;

}
return 0;
}