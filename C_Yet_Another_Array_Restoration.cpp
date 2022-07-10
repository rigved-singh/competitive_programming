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
    lli n,x,y;
    cin>>n>>x>>y;
    if(n==2) cout<<x<<" "<<y<<endl;
    else
    {
        ll diff=y-x;
        
        lli cd=0;
        for(lli i=1;i<=diff;i++)
        {
            if((n-2)>=((diff/i)-1)&&diff/i==ceil(1.0*diff/i))
            {
                cd=i;
              break;
            }
        }
        vector<int> ans;
        lli i=x;
        while(i<=y)
        {
            ans.pb(i);
            i+=cd;
            n--;
           
        }
        
            i=x-cd;
            while(n>0&&i>0)
            {
                ans.pb(i);
                i-=cd;
                n--;
           }
       
         i=y+cd;
       
             while(n>0)
             {
                 ans.pb(i);
                 i+=cd;
                 n--;
             }
        
        for(auto e: ans) cout<<e<<" ";
        cout<<'\n';
    }
    
}
return 0;
}