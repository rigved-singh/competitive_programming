#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int t;
    cin>> t;
    string s[51];
    for(int i=0;i<51;i++)
    {
        for(int j=0;j<i;j++)
        {
            s[i]+='(';
        }
        for(int j=0;j<i;j++) s[i]+=')';
    }
    while(t--)
    {
        int n;
        cin>> n;
        for(int i=0;i<n;i++)
        { label:
            bool ok=true;
        int k=0;
        for(int j=0;j<2*n;j++)
        {
            if(s[n][j]=='(') k++;
            else k--;
            if(k<0) ok=false;
        }
        if(k!=0) ok=false;
        if(ok)
          { cout<< s[n] << '\n';
           next_permutation(s[n].begin(),s[n].end());
          }
          else {
              next_permutation(s[n].begin(),s[n].end());
              goto  label;
          }
        }


    }
return 0;
}