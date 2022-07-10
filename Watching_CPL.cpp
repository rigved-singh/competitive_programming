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
    int  n,k;
    cin>>n>>k;
    lli arr[4001];
    lli arr1[4001];
    int count=0;
lli sum=0;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    if(n<2)
    cout<<"-1"<<endl;

    else
    {
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++)
    arr1[i]=arr[i];
    
    for(lli i=1;i<n;i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }
    for(lli i=1;i<n;i++)
    {
        if(arr[i]>=2*k)
        {
            for(int j=0;j<(i+1)/2;j++)
            {
                sum+=arr1[j];
            }
            if(sum>=k)
            {
                count=i+1;
            
            }
            else count=i+2;
            break;
        }

    }
    
    
    
        if(count>1)
    cout<<count<<endl;
    else 
    cout<<"-1"<<endl;
    
    }
   

}
return 0;
}