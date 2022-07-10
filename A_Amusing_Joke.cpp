#include <bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vlli vector<long long int>
#define pb push_back
#define pii pair<int, int>
#define si set<int>
#define sll set<long long>
#define cc                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int main()
{
    cc 
    
    string s1, s2, s;
    cin >> s1 >> s2 >> s;
    string s3=s1+s2;
    sort(s3.begin(),s3.end());
    sort(s.begin(),s.end());
    if(s3==s) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}