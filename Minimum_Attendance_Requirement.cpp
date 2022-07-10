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
int t;
cin>>t;
while(t--)
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    float maxpre=0;
    float count=0;
    for(int i=0;i<=n;i++)
    {
        if(s[i]=='1')
        count++;
    }
    maxpre=count+(120-n);
    float att=0;
    att=((maxpre*100)/120);
    if(att>=75)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
return 0;
}