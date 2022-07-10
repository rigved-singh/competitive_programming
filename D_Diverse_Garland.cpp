#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
ll n;
cin>>n;
string s;
cin>> s;
ll cnt=0;
string av="RBG";
for(int i=1;i<n;i++)
{ 
        if(s[i]==s[i-1] and s[i]==s[i+1] and i!=n-1)
        {
            if(s[i]=='R') s[i]='G' ;
            else if(s[i]=='G') s[i]='R';
            else s[i]='R';
            cnt++;
            
        }
        else if(s[i]==s[i-1] and s[i]!=s[i+1])
        {
            for(auto e: av)
            {
                if(e!=s[i] and e!=s[i+1]){
                        s[i]=e;
                        cnt++;
                        break;
                } 
                
            }
          
        
    }
    
}
cout<< cnt <<'\n';
cout<< s <<'\n';
return 0;
}