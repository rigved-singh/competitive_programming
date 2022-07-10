#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int n;
    cin>>n;
    ll sum=0;
    ll ar[n];
    for(int i=0;i<n;i++)
    {
        cin>> ar[i];
        sum+=ar[i];
    }
    ll need=sum/2+1;
    ll curr=ar[0];
    if(curr>need) {
        cout<< 1 ;
        return 0;

    }
    
    vector<int > ans ;
    ans.pb(1);
    for(int i=1;i<n;i++){
        if(ar[0]>=2*ar[i]){
            ans.pb(i+1);
            curr+=ar[i];
        }
        if(curr> need) break;
    }

    if(curr>= need){
        cout<< ans.size() <<"\n";
        for(auto e: ans ) cout<< e <<" " ;
    }
    else cout<< 0 << "\n";
return 0;
}