#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void rec(string s, string curr,int idx)
{
    if(idx==s.size())
    {
        cout<< curr <<" " ;
        return ;
    }
    
        rec(s,curr+s[idx],idx+1);
        rec(s,curr,idx+1);
    
}
int main()
{
Bl_dem
    string s;
    cin>> s;
    string curr;
    rec(s,curr,0);
return 0;
}