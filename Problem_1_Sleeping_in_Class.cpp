#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TC;
    cin>> TC;
    while(TC--)
    {
        int n;
        cin>> n;
        vector<int > v(n);
        for(auto &e: v) cin>> e;
        int sum =0;
        for(auto e: v) sum+=e;
        for(int i=n;i>=1;i--) 
        {
            bool ook=false;
            if(sum%i==0)
            {
            bool ok=true;
                int currsum=0;
                for(int j=0;j<n;j++)
                {
                    currsum+=v[j];
                    if(currsum> sum/i)
                    {
                        ok=false;
                        break;
                    }
                    else if(currsum== sum/i)
                    {
                        currsum =0;
                    }
                }
            if(ok)
            {
                cout<< n-i << '\n';
                ook=true;
                break;
            }
            if(ook) break;
            }
        }
    }
    return 0;
}