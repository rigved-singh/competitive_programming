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
int n;
cin>>n;
int sumx=0,sumy=0,sumz=0;
for(int i=0;i<n;i++)
{
    int x=0,y=0,z=0;
    cin>>x>>y>>z;
    sumx+=x;
    sumy+=y;
    sumz+=z;
}
if(sumx==0&&sumy==0&&sumz==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}