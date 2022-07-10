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
    lli arr[n];
    lli b[n];
    for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       b[i]=arr[i];
   } 
   sort(b,b+n);
   int flag=1;
   for(int i=0;i<n;i++)
   {
       if(arr[i]!=b[i]) {flag=0;
       break;
       }
   }
   if(flag) cout<<0<<endl;
   else if(arr[0]==n&&arr[n-1]==1) cout<<3<<endl;
   else if(arr[0]==1||arr[n-1]==n) cout<<1<<endl;
   else cout<<2<<endl;

}
return 0;
}