#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int occ[1025]{0};
bool solve(vector<int> &v, int i  )
{
    for(int j=0;j<(int) v.size();j++)
    {
        if((v[j]^i)>1024) return false;
        if(occ[v[j]^i]){
            continue;
        }
        else return false;
    }
    return true;
}
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        ll n;
        cin>> n;
        vector<int> v;
            fill(occ,occ+1025, 0) ;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>> x;
            v.pb(x);
            occ[x]++;
        }
        int flag=0;
        for(int i=1;i<=1024;i++)
        {
            if(solve(v, i)==false)
            {
                continue;

            }
            else{
                cout<< i << '\n';
                flag=1;
                break;

            }
        }
        if(flag==0) cout<< -1 << '\n';
        
    }
return 0;
}