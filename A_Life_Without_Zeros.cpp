#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int remove(string s)
{
    int re=0;
    int mul=1;
    for(int i=(int)s.size()-1;i>=0;i--)
    {
        if(s[i]!='0')
        {
            re+=(mul*(s[i]-'0'));
            mul*=10;
        }
    }
   
    return re;
}
int main()
{
Bl_dem
    ll a, b;
    cin>> a >> b;
    ll c;
    c=a+b;
    string sa=to_string(a);
    string sb=to_string(b);
    string sc=to_string(c);
    if(remove(sa)+remove(sb)==remove(sc)) cout<<"YES";
    else cout<< "NO";
    
return 0;
}