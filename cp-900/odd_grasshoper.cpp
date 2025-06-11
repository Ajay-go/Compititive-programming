#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      long long x,n;
      cin>>x>>n;
      long long ans;
      for(int i =1;i<=4;i++){
         long long an = n;
         long long a = i;

         if((an-a)%4 == 0){
            long long k = ((an-a)/4 +1);
            if(i == 2){
               if(x % 2 == 0){
                  ans = x+1;
               }
               else ans = x-1;
            }
            else if (i == 4){
               ans = x;
            }
            else if(i == 1){
               long long ak = 1 + (k-1)*4;
               if(x %2 == 0){
                  ans = x-ak;
               }
               else{
                  ans = x + ak;
               }
            }
            else{
               long long ak = 4+ (k-1)*4;
               if(x %2 == 0){
                  ans = x+ak;
               }
               else{
                  ans = x - ak;
               }
            }
            break;

         }
      }
      cout<<ans<<endl;
   }
}