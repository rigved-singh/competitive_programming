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
int arr[5][5];
int x=0;
int y=0;
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        cin>>arr[i][j];
        if(arr[i][j]==1)
        {
            x=i;
            y=j;
        }
      
    }

}

int ans=abs(2-x)+abs(2-y);
cout<<ans<<endl;
return 0;
}