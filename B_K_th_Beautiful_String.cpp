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
    while(t--)
    {
        int n , k ;
        cin>> n >> k;
        int pos=1;
        while(k>pos)
        {
            k-=pos;
            pos++;

        }
        string ans;
        for(int i=0;i<n;i++)
        {
            if(i==n-pos-1 || i==n-k) ans+='b';
            else ans+='a';
        }
        cout<< ans << '\n';
    }
return 0;
}