#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int t;
    cin>> t;
    while(t--)
    {
        ll n , k;
        cin>> n  >> k ;
        
                if(n>k-1 and (n-k-1)&1)
                {
                    cout<< "YES"<< '\n';
                    for(int i=0;i<k-1;i++) cout<< 1 << " ";
                    cout<< n-k+1 << "\n";
                }
                else if(n>(k-1)*2 and (n-(k-1)*2)%2==0)
                {
                    cout<< "YES"<< '\n';
                    for(int i=0;i<k-1;i++) cout<< 2 << " ";
                    cout<< n-(k-1)*2 << "\n";
                }
                else cout<< "NO"<< '\n';

            
        }
    
return 0;
}