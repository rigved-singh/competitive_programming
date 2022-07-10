#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll n, q;
    cin>> n>>q;
    int cnt=0;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
        if(ar[i]) cnt++;
    }
        while(q--)
        {
            int type;
            cin>> type;
            if(type==1){
                ll x;
                cin>> x;
                if(ar[x-1]==1) {
                    ar[x-1]=0;
                    cnt--;
                }else{
                    ar[x-1]=1;
                    cnt++;
                }

            }else if(type==2){
                ll x;
                cin>> x;
                if(cnt>=x) cout<< 1 <<"\n";
                else cout<< 0 <<"\n";
            }
        }
return 0;
}