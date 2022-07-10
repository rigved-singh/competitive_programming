// secant Method
#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define all(v) (v).begin(),(v).end()

using namespace std;
//COMBINOTORICS ---------------------------------------------------------------------------------
ll fact(ll n) { if(n<=1) return 1; return n*fact(n-1);}
ll ncr(ll n , ll r){ return fact(n)/(fact(r)*fact(n-r));}
ll npr(ll n , ll r) {return fact(n)/fact(n-r);}
// look for terminators after if statement 
float f(float x) 
{
    return 2-x+log(x);
}
float solve(float a , float b  )
{
    return (a*f(b)-b*f(a))/(f(b)-f(a));
}
int main()
{

float a , b;
cout<< "Enter The value of A and B:\n";
    cin>> a >> b;
    float c=(a+b)/2;
    cout<< "Enter The no of Iterations\n";

    int iteration=0;
    cin>> iteration ;
    cout<<"\n\n";
    for(int i=0;i<iteration;i++)
    {
        float c=solve(a,b);

        cout<< "Iteration " << i+1 << '\n' << '\n';
        cout<< "The value of a is : "<< a << "\tThe value of b is: " << b << "\tThe value of c is: " << c << '\n' << '\n';
                a=b; b=c;

    }
return 0;
}