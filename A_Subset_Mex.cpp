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
    int arr[101]={0};
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[x]++;
    }
    int ans=0;

for(int j=0;j<2;j++)
{
    for(int i=0;i<101;i++)
    {
        if(arr[i]!=0)
        arr[i]--;
        else
        {
            ans+=i;
            break;
        }

    }
}    
cout<<ans<<endl;

   

}
return 0;
}