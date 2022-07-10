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
stringstream ss;
cin>>s;
while(s.find("WUB")!=string::npos)
{
    int it=s.find("WUB");
    s.erase(s.begin()+it);
    s.erase(s.begin()+it);
    s[it]=' ';
    
}
string ans;
int count=1;


for(int i=0;i<s.size();i++)
{
    if(s[i]==' '&&s[i+1]==' ')
    {
        cout<<" ";
        i++;
    
    }
        else cout<<s[i];
    }

return 0;
}