#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>> n;
        ll ar[n];
        for(auto &e: ar) cin>> e;
        sort(ar,ar+n,greater<int>());
        ll cnt=0;
        set<ll> s;
        for(int i=0;i<n;i++)
        {
            if(ar[i]%2==0)
            {
                if(s.find(ar[i])==s.end())
                {
                    s.insert(ar[i]);
                    while(ar[i]%2==0)
                    {

                        ar[i]/=2;
                        cnt++;
                        s.insert(ar[i]);
                        
                    }
                }

            }

        }
        cout<< cnt << '\n';
    }
return 0;
}