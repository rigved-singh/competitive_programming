#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
ll t;
cin>> t;
while(t--)
{
    ll n;
    cin>> n;
    vector<int> v(n);
    for(auto &e: v) cin>> e ;
    vector<pair<int , int> > ans ;
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        int idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(v[j] < v[idx]) idx=j;

        }
        if(idx>i)
        {
            cnt++;
            ans.pb({i+1,idx+1});
            int temp=v[idx];
            for(int j=idx;j>i;j--)
            {
                v[j]=v[j-1];
            }
            v[i]=temp;

        }
    }
  
 
    cout<< cnt << '\n';
    for(auto e: ans ) cout<< e.first << " " << e.second << " " << e.second-e.first<< '\n';
}
return 0;
}