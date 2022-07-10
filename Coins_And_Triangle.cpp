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
    lli n;
    cin>>n;
    lli arr[10000];
    arr[1]=1;
    for(int i=2;i<10000;i++)
       arr[i]=arr[i-1]+i;
int ans=0;
 for(int i=0;i<10000;i++)
 {
     if(n>=arr[i])
     ans=i;
 }
 cout<<ans<<endl;
}
return 0;
}