#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      long long n;
      cin>>n;
      if(n % 2 != 0 || n < 4){
         cout<<-1<<endl;
         continue;
      }

      long long mx ,mn;

      mx = n/4;

      if(n%6 == 0)mn = n/6;
      else{
         if(n % 6 == 2){
            mn = 2;
            n -= 8;
            mn += (n /6);
         }
         else{
            mn = 1;
            mn += (n/6);
         }
      }
      cout<<mn<<" "<<mx;
      cout<<endl;
      
   }
}