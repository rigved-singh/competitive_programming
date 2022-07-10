#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem

ll t;
cin>> t;
while(t--)
{
   ll n;
   cin>> n;
   string s=to_string(n);
   int ans=INT_MAX;
   for(int i=0;i<30;i++)
   {
       ll k=(1<<i);
       string cmp=to_string(k);
       int cnt=(int)s.size();
       
       for(int i=0;i<min(s.size(),cmp.size());i++)
       {
           if(s[i]==cmp[i]) cnt--;
       }
       
       ans=min(ans,cnt);

   }
   cout<< ans << '\n';

}
return 0;
}