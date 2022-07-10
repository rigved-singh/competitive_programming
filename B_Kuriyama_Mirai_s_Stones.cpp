#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll n;
    cin>> n;
    vector<ll > prefix(n+1,0);
    vector<ll > sorted(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>> prefix[i];
        sorted[i]=prefix[i];
        prefix[i]+=prefix[i-1];
        
    }
    sort(sorted.begin()+1,sorted.end());

    for(int i=1;i<=n;i++)
    sorted[i]+=sorted[i-1];
    ll m;
    cin>> m;
   
    while(m--)
    {
        int type , a , b;
        cin>> type >> a >> b;
        if(type ==1)
        {
            cout<< prefix[b]-prefix[a-1];
        }
        else cout<< sorted[b]-sorted[a-1];
        cout<< '\n';
    }


return 0;
}