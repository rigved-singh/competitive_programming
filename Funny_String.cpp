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
lli t;
cin>>t;
while(t--)
{ bool fun=true;
    string s;
    string rev;
    cin>>s;
    int arr[10000];
rev=s;
reverse(s.begin(),s.end());
for(lli i =0;i<s.size()-1;i++)
{   
    if(abs(s[i]-s[i+1])!=abs(rev[i]-rev[i+1]))
        {
            fun=false;
            break;
        }

}
if(fun)
cout<<"Funny"<<endl;
else cout<<"Not Funny"<<endl;



}
return 0;
}