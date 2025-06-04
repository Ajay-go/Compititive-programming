#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int n;
      cin>>n;
      int mx = -1e9;
      int mn = 1e9;
      vector<int>v(n);
      int ans = 0;
      for(int i = 0;i<n;i++){
         cin>>v[i];
         if(i > 0){
            ans = max(ans,v[i-1]-v[i]);
         }

      }
      for(int i =0;i<n;i++){
         if(i > 0)ans = max(ans,v[i]-v[0]);
         if(i < n-1)ans = max(ans,v[n-1]-v[i]);
      }
      if(v[0] == mn || v[n-1] == mx)cout<< mx-mn<<endl;
      else cout<<ans<<endl;
   }
}