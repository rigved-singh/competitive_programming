#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        string s;
        cin>> s;
        int ans=INT_MAX;
        int n=(int)s.size();
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
            {
                int k=(s[i]-'0')*10+(s[j]-'0');
                if(k%25==0) ans=min(ans,n-(i+2));
            }
            cout<< ans << '\n';
    }
return 0;
}