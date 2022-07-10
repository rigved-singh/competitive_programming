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
lli n;
cin>>n;
int p=0,m=0,pe=0;
int arr[5000];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    if(arr[i]==1) p++;
    else if(arr[i]==2) m++;
    else pe++;
}
int ans=min(p,m);
ans=min(ans,pe);
cout<<ans<<endl;
for(int i=0;i<ans;i++)
{
    for(int j=0;j<n;j++)
    {
        if(arr[j]==1)
        {
            cout<<j+1<<" ";
            arr[j]=-1;
            break;
        }
    }
     for(int j=0;j<n;j++)
    {
        if(arr[j]==2)
        {
            cout<<j+1<<" ";
            arr[j]=-1;
            break;
        }
    }
     for(int j=0;j<n;j++)
    {
        if(arr[j]==3)
        {
            cout<<j+1<<" ";
            arr[j]=-1;
            break;
        }
    }
    cout<<endl;
}

return 0;
}