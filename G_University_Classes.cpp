#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n][7];
   for(int i=0 ; i<n ;i++)
   {
      for(int j = 0 ; j< 7 ; j++)
      {
         cin>>arr[i][j];
      }
   }
   int max =-1;
   for(int j = 0 ; j<7 ; j++)
   {
      int temp = 0;
      for(int  i= 0 ; i<n ; i++)
      {
         if(arr[i][j]==1)
         {
            temp++;
         }
      }
      if(temp>max)
      {
         max=temp;
      }
   }
   cout<<max;
}