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
        cin>> n;
        string s;
        cin>> s;
        string ans ;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='D') ans+='U';
            else if(s[i]=='U') ans+='D';
            else ans+=s[i];
        }
        cout<< ans << '\n';
    }
return 0;
}