#include<bits/stdc++.h>
using namespace std;
#define pi                3.14
#define ll                long long
#define pb                push_back  
#define ppb               pop_back  
#define fst               first
#define sc                second
#define fr(i,a,b)         for(int i=a;i<b;i++)

const int32_t M=1e9+7;

template<typename T>
T gcd(T a,T b){ if(b==0) { return a; }  return gcd(b,a%b); }
float logAbaseB(float a,float b) { float ans = log2(a)/log2(b); return ans;}

void solve()
{   
    // ll k,l,c{0}; cin>>k>>l;

    // while(l%k==0)
    // {
    //     c+=1;
    //     l/=k;
    // }
    
    // (l==1)?cout<<"YES"<<endl<<c-1:cout<<"NO";

 
   float k,l; cin>>k>>l;
   float ans = logAbaseB(l,k);
   int temp = ans;
    if(temp==ans)
    cout<<"YES\n"<<temp-1;
    else
    cout<<"NO\n";
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
    int t=1; 
	//cin>>t;

while(t--)
solve();
return 0;
}