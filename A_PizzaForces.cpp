#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>> t;
    while(t--){
        ll n;
        cin>> n;
            if(n<=6) cout<< 15 << "\n";
            else {
                ll ans=n/6;
                ans*=15;

                    n=n%6;
                    if(n== 1 || n==2){
                        ans+=5;
                    }
                    else if(n==3 || n==4 || n==5){
                        ans +=10;
                    }
                      cout<< ans << "\n";
            }
          
    }
return 0;
}