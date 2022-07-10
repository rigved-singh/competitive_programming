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
lli n;
cin>>n;
int flag=1;
for(int i=2;i<=n/2;i+=2)
{
    if((n-i)%2==0)
    {
        cout<<"YES"<<endl;
        flag=0;
    break;
    }
    }
    if(flag) cout<<"NO"<<endl;
return 0;
}