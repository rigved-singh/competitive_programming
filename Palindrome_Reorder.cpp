#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    string s;
    cin>> s;
    map<char,int> mp;
    for(int i=0;i<(int)s.size();i++)
    {
        mp[s[i]]++;
    }
    bool ok=true;
    if((s.size())%2==0)
    {
        string ans1,ans2;
        for(auto e: mp)
        {
            if(e.second&1){
                ok=false;
                break;
            }
            else
            {
                int k=e.second;
                while(k--)
                {
                    ans1+=e.first;
                    ans2+=e.first;
                   k--;
                }
            }
        } reverse(ans2.begin(),ans2.end());
        if(ok) cout<< ans1 <<ans2 ;
        else cout<<"NO SOLUTION ";
        
    }
    else{
        bool ok=true;
        int cnt=0;
        for(auto e: mp)
        {
            if(e.second&1 ){
                cnt++;
                if(cnt>1) ok=false;
            }
        }
        if(ok)
        {
            char ch;
            int cnt=0;
            string ans1,ans2;
            for(auto e: mp){
                if(e.second&1){
                        ch=e.first;
                        cnt=e.second;
                }
                else{
                    int k=e.second;
                    while(k--)
                    {
                        ans1+=e.first;
                        ans2+=e.first;
                        k--;
                    }
                }
            }
            for(int i=0;i<cnt/2;i++) ans1+=ch;
            for(int i=0;i<cnt/2+1;i++)ans2+=ch;
            reverse(ans2.begin(),ans2.end());
            
            cout<< ans1 <<ans2 ;
           
        }
         else cout<<"NO SOLUTION ";
    }
return 0;
}