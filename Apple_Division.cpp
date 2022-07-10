// Generated subset using bitmasking :)
#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
ll ar[20];
int main()
{
Bl_dem
ll n;
cin>> n;
ll sum=0, ans=0;
for(int i=0;i<n;i++) cin>> ar[i] , sum+=ar[i];

    for(int i=0;i<1<<n;i++){
        ll ss=0;
        for(int j=0;j<n;j++){
            if(i&1<<j){
                ss+=ar[j];
            }
            if(ss<=sum/2)
            ans=max(ans,ss);
        }
    }
    cout<< sum-2*ans;
return 0;
}