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
    lli n;
    cin>>n;
    lli arr[n];
    lli arr1[101]{0};
    for(lli i=0;i<n;i++)
    {
        cin>>arr[i];
        arr1[arr[i]]++;
    }
  
    
        for(int i=0;i<100;i++)
        {
            if(arr1[i]) 
            {
                cout<<i<<" ";
                arr1[i]--;
               
            }
        }
        for(int i=0;i<=100;i++)
        {
            if(arr1[i])
            {
                while(arr1[i])
                {
                    cout<<i<<" ";
                    arr1[i]--;
                }

            }
        }
cout<<endl;
    
}
return 0;
}