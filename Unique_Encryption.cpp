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
    int arr[5]={98, 57, 31, 45, 46};
    char res[5];
    for(int i=0;i<s.size();i++)
    {int x;
        x=(int(s[i]-65)+arr[i])%26;
        res[i]=char(x+65);
    }
    for(int i=0;i<s.size();i++)
    cout<<res[i];
    cout<<"\n";
}
return 0;
}