#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vlli vector<long long int>
#define pb push_back#define si set<int>
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
    lli a,b;
    cin>>a>>b;
    int ans=INT_MAX;
    for(int i=0;i<32;i++)
    {
        int count=0;
        if(i==0&&b==1)
           continue;
        lli c=a;
        while(c)
        {
            count++;
            c=c/(b+i);
        }
   ans=min(ans,count+i);
    
    }
  cout<<ans<<endl;
}
return 0;
}