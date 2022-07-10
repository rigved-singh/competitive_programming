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
     stack <char> st;
     string s;
     cin>> s ;
     ll ans=0;
     for(int i=0;i<s.size();i++)
     {
         if(s[i]=='(') st.push(s[i]);
         else if(s[i]==')') {
             if(st.size()>0)
             {
                 st.pop();
                 ans+=2;
             }
         }
     }
     cout<< ans ;
return 0;
}