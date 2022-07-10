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
    lli a,b;
    cin>>a>>b;
    int highest=0;
    int minimum=INT_MAX;
    int arr[101];
    for(lli i=0;i<a;i++)
    {
        cin>>arr[i];
        highest=max(highest,arr[i]);
        minimum=min(minimum,arr[i]);
    }
   
    lli ans=0;
    if((highest-minimum)*a>=b)
    {
    for(lli i=0;i<b-1;i++)
    {
        for(lli i=0;i<a;i++)
        {
            
            if(i!=a-1) 
            if(arr[i]<arr[i+1])
            {
                arr[i]++;
                break;
            }
        }
    }
    for(lli i=0;i<a;i++)
    {
        if(i!=a-1)
        {
        if(arr[i]<arr[i+1])
        {
            ans=i+1;
            break;
        }
        }
        else ans=-1;
    }
    cout<<ans<<endl;
    }
    else cout<<"-1"<<endl;
}
return 0;
}