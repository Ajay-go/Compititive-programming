#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;

      long long zero = 1;
      long long ones = 0;
      for(int i = 0;i<n;i++){
         int ele ;
         cin>>ele;
         if(ele == 0)zero *= 2;
         if(ele == 1)ones++;
   
      }
      if(ones == 0){
         cout<<0<<endl;
         continue;
      }
      if(zero == 0){
         cout<<ones<<endl;
         continue;
      }
      cout<<ones*zero<<endl;

   }
}