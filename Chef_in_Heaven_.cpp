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
lli tc;
cin>>tc;
while(tc--)
{
    lli n;
    cin>>n;
    string st;
    cin>>st;
    lli count=0;
    int flag=1;
    for(lli i=0;i<n;i++)
    {
        if(st[i]=='1') count++;

        if(float(1.0*count/(i+1))*100>=50) 
        {
            cout<<"YES"<<endl;
            flag=0;
            break;
        }
    }
    if(flag) cout<<"NO"<<endl;
}
return 0;
}