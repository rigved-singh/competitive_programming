#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int tt;
    cin>> tt;
    while(tt--){
        int n;
        cin>>n;
        string t,s;
        cin>> t >> s;
        ll ans=0;
        for(int i=0;i<n;i++){
                if(s[i]=='1')
                {
                    if(t[i]=='0')
                    {
                        ans++;
                        t[i]='2';
                    }
                    else if(i>0 && t[i-1]=='1'){
                        t[i-1]='2';
                        ans++;
                    }
                    else if(i+1<n && t[i+1]=='1')
                    {
                        ans++;
                        t[i+1]='2';
                    }
                    
                }
              
               
            }
            cout<< ans <<"\n";
    }
return 0;
}