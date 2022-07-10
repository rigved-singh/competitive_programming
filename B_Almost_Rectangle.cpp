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
    vector<int> co;
    lli n;
    cin>>n;
    char arr[n][n];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>arr[i][j];
                if(arr[i][j]=='*') 
                {
                    co.pb(i);
                    co.pb(j);
                }
        }
    }
    if(co[0]==co[2]||co[1]==co[3])
    {
        if(co[0]==co[2])
        {
            if(co[0]+1<n)
            {
                arr[co[0]+1][co[1]]='*';
                arr[co[2]+1][co[3]]='*';
            }
            else{
                arr[co[0]-1][co[1]]='*';
                arr[co[2]-1][co[3]]='*';

            }
        }
        else if(co[1]==co[3])
        {
            if(co[1]+1<n)
            {
                arr[co[0]][co[1]+1]='*';
                arr[co[2]][co[3]+1]='*';
            }
            else{
                arr[co[0]][co[1]-1]='*';
                arr[co[2]][co[3]-1]='*';
            }

        }
    }
    else{
        arr[co[0]][co[3]]='*';
        arr[co[2]][co[1]]='*';
    }
    for(lli i=0;i<n;i++)
    {
        for(lli j=0;j<n;j++)
        cout<<arr[i][j];
        cout<<endl;
    }
}
return 0;
}