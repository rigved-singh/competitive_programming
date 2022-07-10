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
int n;
cin>>n;
int arr[101];
for(int i=0;i<n;i++)
cin>>arr[i];
int ans=0;
int count=0;
sort(arr,arr+n);
for(int i=0;i<n;i++)
{
    int div=arr[i];
    if(arr[i]!=-1)
    for(int j=0;j<n;j++)
    {
        if(arr[j]%div==0) 
        {
            arr[j]=-1;
            count++;
        }
        
        }
        if(count>0){
            ans++;
            count=0;
    }

}
cout<<ans<<endl;
return 0;
}