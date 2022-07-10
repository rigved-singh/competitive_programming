#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vlli vector<long long int>
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
int t;
cin>>t;
while(t--)
{
    string s;
    s.clear();

    int n;
    cin>>n;
    if(n%8==0||n%8==7)
    {   if(n%8==0)
        cout<<n-1<<"SL"<<endl;
        else
        cout<<n+1<<"SU"<<endl;
    }
    else if(n%8==1||n%8==4) 
        {
            s="LB";
            if(n%8==1) cout<<n+3<<s<<endl;
            else cout<<n-3<<s<<endl;
        }
        else if(n%8==2||n%8==5)
        {
            s="MB";
        if(n%8==2) cout<<n+3<<s<<endl;
        else cout<<n-3<<s<<endl;

        } 
        else if(n%8==3||n%8==6)
         {
            s="UB";
            if(n%8==3)
            cout<<n+3<<s<<endl;
            else cout<<n-3<<s<<endl;
        }

    
}
return 0;
}