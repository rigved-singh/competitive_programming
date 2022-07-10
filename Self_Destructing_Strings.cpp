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
    cin>>s;
    if(s.size()&1)
    cout<<"-1"<<"\n";
    else {
        int count=0;
        int b=0;

        for(lli i=0;i<s.size();i++)
        if(s[i]=='1') count++;
        else b++;

      if(count==b) cout<<"0"<<endl;
      else if(count==0||b==0) cout<<"-1"<<endl;
      else cout<<(s.size()-min(count,b)*2)/2<<endl;


    }
}
return 0;
}