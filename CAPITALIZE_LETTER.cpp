#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
#include<iomanip>
#include<queue>
#include<stack>
#include<map>
#include<fstream>
#include<math.h>
#include<ctype.h>
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
string s;
getline(cin,s);
s[0]=toupper(s[0]);
s[s.size()-1]=toupper(s[s.size()-1]);
for(int i=1;i<s.size();i++)
if(s[i]==' ')
{
   s[i-1]= toupper(s[i-1]);
    s[i+1]=toupper(s[i+1]);
}
cout<<s<<endl;

return 0;
}