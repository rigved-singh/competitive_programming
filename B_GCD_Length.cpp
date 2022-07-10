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
int cnt(lli n)
{
    int count=0;
    while(n)
    {
        count++;
        n/=10;
    }
    return count;
}
int main()
{
cc
int t;
cin>>t;
while(t--)
{
    lli x,y,z;
    cin>>x>>y>>z;
   lli arr[10]={3,13,101,1009,10007,100003,1000033,10000223,100002011,0};
   lli ansx=arr[z-1];
   lli ansy=arr[z-1];
   while(cnt(ansx)!=x)
   {
       ansx*=2;
   }
   while(cnt(ansy)!=y)
   {
       ansy*=3;
   }
  cout<<ansx<<" "<<ansy<<endl;
}
return 0;
}