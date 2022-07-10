#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()

{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        string s;
        cin>> s;
      map<char , int > mp;
       for(auto e: s)
       {
           if(e=='R') {
               mp['P']++;
               
               
           }
           else if(e=='P')
           {
               
               mp['S']++;
           }
           else{
               mp['R']++;
              
           }
       }
       int mx=max(mp['R'], max(mp['S'], mp['P']));
       for(auto e : mp)
       {
           if(e.second==mx)
           {
               for(int i=0;i<s.size();i++)
               {
                   cout<< e.first; 
               }
               cout<< '\n';
               break;
           }
       }
    }
return 0;
}