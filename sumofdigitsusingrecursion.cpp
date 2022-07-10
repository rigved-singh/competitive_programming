#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// palindrome check using reucrsion
bool check (string s, int st, int en)
{   
   if(st>en) return false;
   if(en-st==1 || en-st==0) return true;
   if(s[st]!=s[en]) return false;
   check(s,st+1,en-1);
return true;
}
int main()
{
Bl_dem
    string s;
    cin>> s;
    int n=(int)s.size();
    if(check(s,0,n-1))
    cout<< "Yes";
    else cout<< "NO";
    cout<<'\n'; 
return 0;
}