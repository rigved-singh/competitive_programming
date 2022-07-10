#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// look for terminators after if statement 
int main()
{
Bl_dem
vector<int> f , s;
ll pa =0, pb =0;
bool firstlast=1;
ll n;
cin>> n;
for(int l=0;l<n;l++)
{
    int a;
    cin>> a;
    if(l==n-1)
    {
        if(a<0) firstlast=false;
    }
    if(a>0)
    {
        f.pb(a);
        pa+=a;
    }
    else 
    {
        s.pb(abs(a));
        pb+=abs(a);
    }
}
if(pa>pb) cout<< "first" ;
else if(pb>pa) cout<< "second";
else{
    for(int i=0;i<min(f.size(),s.size());i++)
    {
        if(f[i]>s[i])
        {
            cout<< "first";
            return 0;
        }
        else if(f[i]<s[i]) {
            cout<< "second" ;
            return 0;
        }
    }
    if(f.size()> s.size())
    {
        cout<< "first" ;
        return 0;
    }
    else if(f.size()<s.size())
    {
        cout<< "second" ;
        return 0;
    }
    if(firstlast==1) cout<< "first";
    else cout<< "second";
}
return 0;
}