#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// look for terminators after if statement 
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        string s;
        cin>> s;
        int af[26]{0}, bf[26]{0};
        for(int i=0;i<s.size()/2;i++)
        {
            af[s[i]-'a']++;
        }
        int k=0;
        if(s.size()&1)
        {
            k=s.size()/2+1;

        }
        else k=s.size()/2;
        for(int i=k;i<s.size();i++)
        {
            bf[s[i]-'a']++;
        }
        int flag=0;
        for(int i=0;i<26;i++)
        {
            if(af[i]!=bf[i]) {
                cout<< "NO";
                flag=1;
                break;
            }
        }
        if(!flag) cout<< "YES";
        cout<< '\n';
    }
return 0;
}