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
map<string  , int > mp;
for(int i=0;i<n;i++)
{
    string s;
    cin>> s;
    mp[s]++;
    if(mp[s]==1)
    {
        cout<< "OK" << '\n';

    }
    else cout<< s << mp[s]-1<< '\n';
}
return 0;
}