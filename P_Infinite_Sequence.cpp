#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll a,b,c;
    cin>> a >> b >>c;
    ll diff=b-a;
    if(a==b) {
        cout<<"YES";
        return 0;
    }
    if(b>a and c<=0) {
        cout<<"NO";
        return 0;
    }
    else if(b<a and c>=0) {
        cout<< "NO" ;
        return 0;
    }
    if(abs(b-a)%abs(c)==0){
        cout<< "YES";
        return 0;

    }
    cout<<"NO";
return 0;
}