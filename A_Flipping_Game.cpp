#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int n;
    cin>> n;
    int ar[n];
    for(int i=0;i<n;i++) cin>> ar[i];
    int ans=0;
    for(int i=0;i<n;i++)
    {   int curr=0;
        for(int j=i;j<n;j++)
        {
            curr=0;
            for(int k=i;k<=j;k++)
            {
                    curr+=(1-ar[k]);
            }
            for(int l=0;l<n;l++)
            {
                if(l>j || l<i) curr+=ar[l];
            }
            ans=max(ans,curr);
        }
    }
    cout<< ans ;
return 0;
}