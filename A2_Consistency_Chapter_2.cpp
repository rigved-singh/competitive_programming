#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int tt;
    cin>> tt;
    for(int t=1;t<=tt;t++)
    {
        string s;
        cin>> s;
        int n=(int)s.size();
        string cmp="AEIOU";
        map<char,int> mp;
        int ans=INT_MAX;
       
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(auto e: mp)
        {
            int curr=0;
            if(cmp.find(e.first)!=string::npos) 
            {
                for(int i=0;i<n;i++)
                {
                    if(s[i]==e.first)
                     continue;
                        else if(cmp.find(s[i])==string::npos)
                        {
                            curr++;
                        }
                            else curr+=2;
                }
            }
            else // e.first is consonant
            {
                    for(int i=0;i<n;i++)
                {
                    if(s[i]==e.first) continue;
                    else if(cmp.find(s[i])==string::npos)
                    {
                       
                        curr+=2;
                    }
                    else curr++;
                }
            }
          
            ans=min(ans,curr);
        }
        bool ok =true;
        for(int i=0;i<n;i++)
        {
            if(cmp.find(s[i])==string::npos)
            {
                ok=false;
            }
        }
        if(ok)
        {
            ans=min(ans,n);
        }
        ok=true;
        for(int i=0;i<n;i++)
        {
            if(cmp.find(s[i])!=string::npos)
            {
                ok =false;
            }
        }
        if(ok)
        {
            ans=min(ans,n);
        }
        cout<< "Case #" << t << ": " << ans <<'\n';
    }
return 0;
}