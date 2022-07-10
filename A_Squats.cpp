#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int n;
    cin>> n;
    string s;
    cin>> s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='X') cnt++;
    }
    if(cnt> n/2)
    {
        cout<< cnt-n/2<< "\n";
        int k=cnt-n/2;
        
        
        for(int i=0;i<n;i++){
            if(s[i]=='X' and k){
                cout<< 'x';
                k--;
            }else cout<< s[i];
        }
    }
    else {
        cout<< n/2-cnt<<" \n";
        int k=n/2-cnt;
       
        for(int i=0;i<s.size();i++){
            if(s[i]=='x' and k ){
                cout<< 'X';
                k--;
            }else cout<< s[i];
        }
    }

return 0;
}