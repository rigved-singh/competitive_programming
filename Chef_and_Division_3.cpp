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
    lli n,k,d;
    cin>>n>>k>>d;
    lli sum=0;
    int arr[101];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sum/=k;
    if(sum==0)
    cout<<sum<<endl;
    else cout<<min(sum,d)<<endl;
    

}
return 0;
}