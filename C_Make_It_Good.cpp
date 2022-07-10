#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n ;
        int ar[n];
        for(int i=0;i<n;i++) cin>> ar[i];
        int ch=0;
        int i=n-1;
        for(;i>=1;i--)
        {

           if(ar[i-1]<ar[i]) break;

        }
        for(;i>=1;i--)
        {
            if(ar[i]<ar[i-1]) break;
        }
        cout<<  i << '\n';
    }
return 0;
}