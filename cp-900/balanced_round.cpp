#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
      int n,k;
      cin>>n>>k;
      vector<int>v(n);

      for(int i = 0;i<n;i++){
         cin>>v[i];
      }
      sort(v.begin(),v.end());

      int prev = v[0];
      int cnt  = 1;
      vector<int>temp;
      for(int i = 1;i<n;i++){
         int curr = v[i];
         if(curr - prev <= k){
            cnt++;
         }
         else{
            temp.push_back(cnt);
            cnt = 1;
         }
         prev = curr;
      }
      temp.push_back(cnt);
      sort(temp.begin(),temp.end(),greater<int>());
      // for(int ele:temp)cout<<ele<<" ";
      int ans = 0;
      while(temp.size() > 1){
         ans += temp.back();
         temp.pop_back();
      }
      cout<<ans<<endl;

   }
}