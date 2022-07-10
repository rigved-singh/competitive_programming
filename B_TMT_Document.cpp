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
    string s;
    cin>>s;
    int flag=1;
   int t=0,m=0;
   for(int i=0;i<n;i++)
   {
       if(t<m){
           flag=0;
           break;
       } 
       if(s[i]=='T')
       {
           t++;
       }
       else m++;
   }
   if(t!=2*m) flag=0;
   t=0,m=0;
   for(int i=n-1;i>=0;i--)
   {
       if(t<m){
           flag=0;
           break;
       } 
       if(s[i]=='T')
       {
           t++;
       }
       else m++;
   }
   if(flag && t==2*m) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}

return 0;
}