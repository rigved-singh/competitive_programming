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
int arr[101];
int mx=INT_MIN;
int mn=INT_MAX;
int posmx=0;
int posmn=0;
for(int i=0;i<t;i++)
{
    cin>>arr[i];

    if(arr[i]>mx)
    {
        mx=arr[i];
        posmx=i;
    }
    
    if(mn>=arr[i])
    {
        mn=arr[i];
        posmn=i;
    }
   
    
}
 int ans=0;
 ans+=posmx;
    if(posmx>posmn) ans+=t-2-posmn;
    else ans+=t-1-posmn;
cout<<ans<<endl;



return 0;
}