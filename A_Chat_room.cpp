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
string s;
cin>>s;
int count=0;
int j=0;
char arr[]={'h','e','l','l','o'};
for(int i=count;i<6;i++)
{
   while(j!=s.size())
   {
       if(arr[i]==s[j])
       {
           count++;
           j++;
           break;
       }
       j++;
}
}
   if(count==5) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

return 0;
}