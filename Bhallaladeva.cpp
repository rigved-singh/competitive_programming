#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    Bl_dem
    int  n;
    cin>> n;
        vector<int> ar(n);
        ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>> ar[i];
        sum+=ar[i];
    }

    sort(ar.begin(),ar.end(),greater<int>());
  
       
          int q;
            cin>> q;
           
            while(q--)
            {
                int x;
                    cin>> x;
                if(x==0)
                {
                    cout<< sum << "\n";
                }
                else
                {
                   int i=-1 , j=n-1;
                   int ans=0;
                   while(i<j)
                   {
                       ans+=ar[j];
                       j--;
                       i+=x;

                   }
                     cout<< ans <<"\n";
                }
              
                   
            }

return 0;
}