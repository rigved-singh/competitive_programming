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
    while(t--){
        ll n;
        cin>>n; 
        string ff , ss;
        cin>> ff >> ss;
        int f =0 , s=0;
        for(int i=0;i<n;i++){
            if(ff[i]>ss[i]) f++;
            else if(ff[i]<ss[i]) s++;
        }
        if(f>s) cout<< "RED";
        else if(s>f)cout<< "BLUE";
        else cout<< "EQUAL";
        cout<<"\n";
    }
return 0;
}