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
        ll  n , k;
        cin>>n >> k;
        string a , b;
        cin>> a >> b;
        vector<int> pre(27,0) , freq(26,0);
        for(auto e: a) 
        {
            pre[e-'a']++;
        }
        for(auto e: b) 
        {
            freq[e-'a']++;
        }
        bool ok=true;
        for(int i=0;i<26;i++)
        {
            if(pre[i]<freq[i] || abs(pre[i]-=freq[i])%k!=0 )
            {
                ok=false;

            }
            pre[i+1]+=pre[i];
                    }
                    cout<< (ok ? "Yes" : "No") << '\n';
    }
return 0;
}