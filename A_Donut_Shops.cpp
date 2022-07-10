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
    double a,b,c;
    cin>>a>>b>>c; 
   if(c>a)
    cout<<'1'<<" ";
   else if(c<=a)
   {

       if(b>=1) cout<<"-1"<<" ";
   }
   if(a<=c/b) cout<<"-1"<<" ";
   else cout<<fixed<<setprecision(0)<<b<<" ";
   
   cout<<endl;
   

}
return 0;
}