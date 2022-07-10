#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int t;
    cin>> t;
    while(t--)
    {
        vector<char> v;
        string s;
        cin>> s;
        for(int i=0;i<(int)s.size();i++)
        {
            if(s[i]!='?') v.pb(s[i]);
        }
        bool ok=false;
        for(int i=0;i<(int)v.size()-1;i++){
            if(v[i]=='M' and v[i+1]=='U'){
                ok=true;
                break;
            }
        }
        if(ok) cout<<"Yes";
        else cout<<"No";
        cout<<"\n";
    }
return 0;
}