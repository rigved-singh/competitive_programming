#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    string a, b;
    cin>> a >> b;
    int fa[26]{0} , fb[26]{0};
    int n=(int)a.size();
    int m=(int)b.size();
    for(int i=0;i<n;i++)
    fa[a[i]-97]++;
    for(int i=0;i<m;i++) fb[b[i]-97]++;
    bool ok=true;
    
    for(int i=0;i<26;i++)
    {
         if(fa[i]!=fb[i]) 
         {
             ok =false;
         }
    }
    if(ok==true) 
    cout<< "array";
    else 
    {
        bool yes =true;
        for(int i=0;i<26;i++)
        {
            if(fa[i]<fb[i]) yes=false;
        }
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[j]) j++;

        }
        if(j==m and yes) cout<< "automaton";
        else if(j!=m and yes) cout<< "both";
         else cout<< "need tree";
    }
return 0;
}