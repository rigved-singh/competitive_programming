#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
int n , m;
cin>> n >> m;
set<pair<int,int> > s;
for(int i=0;i<n;i++)
{
    int  x;
    cin>> x;
    s.insert(make_pair(x,i));

}
for(int i=0;i<m;i++)
{
   int x;
    cin>> x;
    auto it=s.lower_bound(make_pair(x+1,0));
     if(it==s.begin() )
    {
        cout<< -1<< '\n';
    }
    else 
    {
       it--;
       cout<< (*it).first << '\n';
       s.erase(it);

    }
  
    
}
return 0;
}