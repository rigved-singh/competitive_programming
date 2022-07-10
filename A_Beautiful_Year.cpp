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
lli n;
cin>>n;
n++;
int flag=1;
while(flag)
{
    flag=0;
    set<int> s;
    lli k=n;
    while(k)
    {
        s.insert(k%10);
        k/=10;
    }
    if(s.size()!=4)
    {
        flag=1;
        n++;
    }
    else {
        break;
    }

}
cout<<n<<endl;
return 0;
}