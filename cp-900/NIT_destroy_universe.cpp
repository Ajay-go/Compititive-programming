#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int n;
      cin>>n;
      vector<int>v(n);
      
      for(int i = 0;i<n;i++){
         cin>>v[i];


      }
      int ans = 0;

      int i = 0;
      while(i < n){
         while(i < n && v[i] ==0)i++;
         if(i < n)ans ++;
         while(i < n && v[i] != 0)i++;
      }
      if(ans == 0 || ans == 1)cout<<ans<<endl;
      else cout<<2<<endl;
       
      
   }
}