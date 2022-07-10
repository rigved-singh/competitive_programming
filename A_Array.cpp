#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int n;
    cin >> n;
    vector<int> v;
    vector<int> v1,v2,v3;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>> x;
        if(x>0) v3.pb(x);
        else if(x==0)  v2.pb(x);
        else v.pb(x);
    }
    v1.pb(v[0]);
    v.erase(v.begin());
    if(v.size()>=2)
    {
        v3.pb(v[0]);
        v3.pb(v[1]);
        for(int i=2;i<v.size();i++) v2.pb(v[i]);
    }
    else {
        for(int i=0;i<v.size();i++) v2.pb(v[i]);
    }
    cout<< v1.size()<< " "; 
    for(auto e: v1) cout<< e<< " ";
    cout<<'\n';
    cout<< v3.size()<<" ";
    for(auto e: v3) cout<< e <<" " ;
     cout<<'\n';
     cout<< v2.size()<<" ";
    for(auto e: v2)cout<< e << " ";
   
    
    
return 0;
}