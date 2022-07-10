#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define all(v) (v).begin(),(v).end()
#define DP 0.01
using namespace std;
//COMBINOTORICS ---------------------------------------------------------------------------------
ll fact(ll n) { if(n<=1) return 1; return n*fact(n-1);}
ll ncr(ll n , ll r){ return fact(n)/(fact(r)*fact(n-r));}
ll npr(ll n , ll r) {return fact(n)/fact(n-r);}
// look for terminators after if statement
double solution(double x)
{
return x*x*x-2*x-5;
}
void bisection(double a, double b)
{
    if(solution(a)*solution(b)>=0)
    cout<<"assumed wrong a and b\n";
    double c=a;
    while(b-a>=DP)
    {
c=(a+b)/2;
    if(solution(c)==0.0)
break;
else if(solution(c)*solution(a)<0)
b=c;
else
a=c;
} 
cout<<"The root value of function is:"<<fixed<<setprecision(10)<<c;
}
int main()
{

double a,b;
cout<<"enter the  numbers a and b\n";
cin>>a>>b;
bisection(a,b);
return 0;
}