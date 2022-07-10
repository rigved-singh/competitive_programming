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
    ll t;
    cin>> t;
    while(t--)
    {
        ll n;
        cin>> n;
        string s;
        cin>> s;
        string ans;
        int i=0;
        int idx=-1;
        while(s[i]=='0' and i<n)
        {
            ans+='0';
            idx=i;
            i++;
           
        }
        string k;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0' )
            {
                if(idx!=i)
                ans+='0';

                break;

            }
            else k+=s[i];
        }
        ans+=k;
        cout<< ans << '\n';

    }
return 0;
}