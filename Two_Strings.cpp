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
int t;
cin>>t;
while(t--)
{ bool yes=true;
    string s,s1;
    cin>>s>>s1;
   for(int i=0;i<s.size();i++)
   {
       if(s1.find(s[i])!=string::npos)
       {
           cout<<"YES"<<endl;
           yes=false;
           break;
       }


   }
   if(yes)
cout<<"NO"<<endl;

}
return 0;
}