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
lli arr[49]{0};
arr[0]=0;
arr[1]=1;
arr[2]=1;
for(lli i=3;i<49;i++)
{
    arr[i]=arr[i-1]+arr[i-2];
}
lli n;
cin>>n;
for(lli i=0;i<45;i++)
{
    if(n==1)
    {
        cout<<0<<" "<<0<<" "<<1<<endl;
        break;
    }
    else if(n==0)
    {
        cout<<0<<" "<<0<<" "<<0<<endl;
        break;
    }
    else
    if(arr[i]==n)
    {
        cout<<0<<" "<<arr[i-1]<<" "<<arr[i-2];
        break;
    }
}

return 0;
}