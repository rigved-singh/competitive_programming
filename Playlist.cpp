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
 int cnt=0;
int res=0;
map<int,int> mp;
for(int i=0;i<n;i++)
{
    int x;
    cin>> x;
    if(mp.find(x)!=mp.end())
    {
        cnt=min(i-mp[x],cnt+1);
        
    }
    else{
        cnt++;

    }
    mp[x]=i;
    res=max(res,cnt);



}
 
 cout<< res ;
return 0;
}