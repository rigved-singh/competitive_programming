#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
int k;
cin>> k;

 map<int,int> mp;
    for(int i=0;i<4;i++)
    {
       
        for(int j=0;j<4;j++)
        {
            char ch ;
            cin>> ch ;
            if(ch=='.') continue;
            else mp[ch-'0']++;
        }
        
        
    }
   
            for(auto e: mp){
                if(e.second>2*k){
                    cout<< "NO";
                    return 0;
                }
            }
        
     cout<< "YES";
    return 0;
}