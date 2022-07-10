#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// look for terminators after if statement 
int main()
{
Bl_dem
    int t;
    cin>> t;
    while(t--)
    {
        ll n;
        cin>> n;
        ll ar[n];
        for(int i=0;i<n;i++) cin>> ar[i];
        int ptr=1;
        for(int i=0;i<n;i++)
        {
            ptr=i+1;
            while(ar[ptr]*ar[ptr-1]<0 and ptr<n)
            {
                ptr++;
            }
                for(int j=ptr-i;j>=1;j--) cout<< j << " ";
                i=ptr-1;
                
               
        }
        cout<< '\n';
    }
return 0;
}