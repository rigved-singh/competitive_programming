#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int n;
    cin >> n;
    int sum1=0,sum2=0;
    int high[n], low[n];
    for(int i=0;i<n;i++)
    {
        cin>> high[i]>> low[i];
        sum1+=high[i];
        sum2+=low[i];

    }
    
    if(sum1%2==0 and sum2%2==0) {
        cout<< 0 <<'\n';
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        int k=high[i]+low[i];
        if(k&1) {
            sum1-=high[i]+low[i];
            sum2-=low[i]+high[i];
            if(sum1%2==0 and sum2%2==0){
                cout<< 1 ;
                return 0;
            }
        }
    }
    cout<< -1 ;

return 0;
}