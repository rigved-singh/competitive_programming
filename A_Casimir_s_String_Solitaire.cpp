#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
int t;
cin >> t;
while(t--)
{
    map<char,int>mp;
string s;
cin>> s;
for(auto e: s) {
    mp[e]++;
}
if(mp['B']==mp['A']+mp['C']) cout << "YES" ;
else cout<<" NO" ;
cout<< '\n';
}
return 0;
}