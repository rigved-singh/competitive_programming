#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int p , q , l , r;
    cin>> p >> q >> l >> r;
    int avail[1002]{0} ;
    for(int i=0;i<p;i++)
    {
        int a, b;
        cin>> a >> b;
        avail[a]++;
        avail[b+1]--;
    }
    vector<pair<int,int> > s;
    for(int i=1;i<1002;i++)
    avail[i]+=avail[i-1];
    ll cnt=0;
   for(int i=0;i<q;i++)
   {
      int a, b;
      cin>> a >> b;
      s.push_back(make_pair(a,b));
     
   }
   for(int k=l;k<=r;k++)
     for(int i=0;i<q;i++)
   {
        int start=s[i].first+k;
        int end=s[i].second+k;
        int flag=0;
        for(int j=min(1000,start);j<=min(1000,end);j++)

        {
            if(avail[j])
            {
                cnt++;
                flag=1;
                break;
            }
        }
        if(flag) break;

   }
   cout<< cnt ;
   
   
   
   
return 0;
}