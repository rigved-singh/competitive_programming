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
{
    int a;
    cin>>a;
    if(a>45) cout<<"-1"<<endl;
    else {
      vector<int> ans;
        vector<int> v={1,2,3,4,5,6,7,8,9};
        while(a>v[v.size()-1])
        {
           ans.pb(v[v.size()-1]);
            a-=v[v.size()-1];
            v.erase(v.begin()+v.size()-1);
            
        }
        ans.pb(a);
        sort(ans.begin(),ans.end());
        for(auto e: ans) cout<<e;
        cout<<endl;
    }

}
return 0;
}