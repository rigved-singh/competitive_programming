#include<iostream>
#include<vector>
#include<set>
#include<string.h>
#include<algorithm>
#include<iomanip>
#include<queue>
#include<stack>
#include<map>
#include<fstream>
#include<math.h>
#include<ctype.h>
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
int identical(string s, string t)
{
    int n=1;

    if(s.size()!=t.size())
    return 0;

    else 
    if(s.size()==t.size()) 
    {
        for(int i=0;i<s.size();i++)
        if(s[i]!=t[i])
        {
        n=0;
        break;
        }
    }
    return n;
    
}
int main()
{
cc
string s,t;
cin>>s>>t;
reverse(t.begin(),t.end());
if(identical(s,t))
cout<<"YES";
else cout<<"NO";

return 0;
}