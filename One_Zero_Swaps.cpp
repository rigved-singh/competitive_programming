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
lli t;
cin>>t;
while(t--)
{ lli n;
cin>>n;
    string s,p; lli count=0,count1=0;
    cin>>s>>p;
        for(lli i=0;i<n;i++)
        if(s[i]=='1')
        count++;

        for(lli i=0;i<n;i++)
        if(p[i]=='1')
        count1++;

        if(count1==count)
        cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }

return 0;
}