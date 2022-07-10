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
#define ll long long
#define vi vector<int>
#define vlli vector<long long int>
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
using namespace std;
int main()
{
int t,n,x;
vi s;
cin>>t;
while(t--)
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.pb(x);

    }
    if(s.size()==1)
    cout<<s.at(1);
    while(s.size()!=2)
    {
        sort(s.begin(),s.begin()+2);
    s.erase(s.begin()+2);
    }
cout<<s.front()<<" "<<s.back()<<endl;
}
return 0;
}