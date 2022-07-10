#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int n;
    cin>> n;
    string ans;
    int mx=0;
    map<string,int> mp;
    for(int i=0;i<n;i++){
        string s;
        cin>> s;
        mp[s]++;
    }
    for(auto e: mp)
    {
        if(e.second>mx) {
            ans=e.first;
            mx=e.second;
        }
    }
    cout<< ans << '\n';
return 0;
}