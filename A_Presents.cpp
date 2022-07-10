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
for(int i=1;i<=n;i++)
    cin>>arr[i];

int j=1;
for(int k=0;k<n;k++)
{
for(int i=1;i<=n&&j<=n;i++)
{   
    if(arr[i]==j)
    {
        cout<<i<<" ";
        j++;
        break;
    }

}
}
return 0;
}