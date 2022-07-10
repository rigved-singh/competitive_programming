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
    int count=0;
    int arr[26]={0};
     string s;
     cin>>s;

     for(int i=0;i<s.size();i++)
     arr[(int(s[i])-97)]++;

     for(int i=0;i<26;i++)
     {
     if(arr[i]>=2)
     count+=(arr[i]/2);
     }
     int maximum=s.size()/3;
if(count>maximum)
cout<<maximum<<endl;
else cout<<count<<endl;

}
return 0;
}