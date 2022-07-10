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
stack<int> s;
int n;
cin>>n;
int maxele=0;
while(n--)
{
    int k;
    cin>>k;
    if(k==1)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    else if(k==2)
    {
          
        s.pop();
    }
    else if(k==3)
    {
        stack <int> s2;
        while(!s.empty())
        {
        s2.push(s.top());
        if(s.top()>maxele) maxele=s.top();
        s.pop();
        }
        while(!s2.empty())
        {
            s.push(s2.top());
            s2.pop();
        }
        cout<<maxele<<endl;
        maxele=0;
    }
}
return 0;
}