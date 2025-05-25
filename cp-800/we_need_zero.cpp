#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      long long n;
      cin>>n;
      long long ans = 0;
      for(int i = 0;i<n;i++){
         int ele;
         cin>>ele;
         ans ^= ele;
      }
      if(n %2 == 0){
         if(ans == 0)cout<<0<<endl;
         else cout<<-1<<endl;
         
      }
      else{
         cout<<ans<<endl;
      }
   }
}
