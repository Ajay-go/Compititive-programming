#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin>>n;
      for (int i = 0; i < n; i++)
      {
         int ele;
         cin >> ele;
         cout<<n-(ele-1)<<" ";
      }

     
   }
   return 0;
}
