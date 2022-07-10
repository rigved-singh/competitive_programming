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
        string k=s;
        if(s[0]==s[s.size()-1]) {
            cout<<"NO"<< '\n';
            continue;
        }

        ll cntop =0 , cntcl=0;
        for(int i=0;i<s.size();i++)
        {
            if(k[i]==s[0]) k[i]='(' , cntop++;
            else if(k[i]==s[s.size()-1]) k[i]=')' , cntcl++;
        }
       
        for(int i=0;i<s.size();i++)
        {
            if(k[i]=='A' || k[i]=='B'|| k[i]=='C')
            {
                if(cntop>cntcl) k[i]=')';
                else k[i]='(';
            }
        }
       bool bal=1;
        ll check=0;
   
        for(int i=0;i<k.size();i++)
        {
            if(k[i]=='(') check++;
            else if(k[i]==')') check--;
            if(check<0) bal=false;
        }
      
        
        if(check==0 and bal) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";

    }
return 0;
}