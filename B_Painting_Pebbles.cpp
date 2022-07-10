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
    ll n , k;
    cin>> n >> k;
    ll ar[n];
    for(auto &e: ar) cin>> e;
    int mx=*max_element(ar,ar+n);
    int mn=*min_element(ar,ar+n);
    for(int i=1;i<=k;i++)
    {
        if(mn/k+(mn%k>i-1)+1<mx/k+(mx%k>i-1) )
        {
            cout<<"NO"<< '\n';
            return 0;
        }
    }
    cout<< "YES"<< "\n";
    for(int i=0;i<n;i++)
    {
        
       int p=1;
        for(int j=0;j<ar[i];j++)
        {
          if(p==k+1)
          {
              cout<< 1 << ' ';
              p=1;
          }
          else cout<<  p << " ";
          p++;
          
        }
        cout<< '\n';
    }
return 0;
}