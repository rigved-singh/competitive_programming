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
    map<int,int> ma;
    lli n;
    cin>>n;
    lli arr[n];
    for(lli i=0;i<n;i++)
    {
        cin>>arr[i];
        ma[arr[i]]++;
    }
    int ans=-1;
    int count=-1;
    
    for(lli i=0;i<n;i++)
    {
        if(ma[arr[i]]==1)
        {
            if(ans==-1) 
            {
                ans=arr[i];
                count=i+1;
            }
            else 
            {
                if(arr[i]<ans)
                {
                    ans=arr[i];
                    count=i+1;
                }
            }
        }
    }
    cout<<count<<endl;
}
return 0;
}