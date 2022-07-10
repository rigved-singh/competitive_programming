#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
//COMBINOTORICS ---------------------------------------------------------------------------------
ll fact(ll n) { if(n<=1) return 1; return n*fact(n-1);}
ll ncr(ll n , ll r){ return fact(n)/(fact(r)*fact(n-r));}
ll npr(ll n , ll r) {return fact(n)/fact(n-r);}
// look for terminators after if statement 
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        string s;
        cin>> s;
        int cntab=0 , cntba=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='a' and s[i+1]=='b') cntab++;
            else if(s[i]=='b' and s[i+1]=='a') cntba++;
        }
        if(cntab==cntba) {
            cout<< s;

        }
        else{
            s[0]='a';
            s[s.size()-1]='a';
            cout<< s ;
        }
        cout<< '\n';
    }
return 0;
}