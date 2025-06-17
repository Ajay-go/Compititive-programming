#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int n,m,i,j;
      cin>>n>>m>>i>>j;
      vector<pair<int,int>>v = {{1,1},{n,m},{1,m},{n,1}};

      int mx = 0;
      int idx = 0;
      vector<int>ans(2);
      for(int k = 0;k<4;k++){
         auto cord = v[k];
         
         int curr_dis = abs(cord.first-i)+abs(cord.second-j);
         if(curr_dis > mx){
            mx = curr_dis;
            idx = k;
            ans[0] = cord.first;
            ans[1] = cord.second;
         }
      }
      if(idx == 0){
         ans.push_back(n);
         ans.push_back(m);
      }
      else if(idx == 1){
         ans.push_back(1);
         ans.push_back(1);
      }
      else if(idx == 2){
         ans.push_back(n);
         ans.push_back(1);
      }
      else{
         ans.push_back(1);
         ans.push_back(m);
      }
      cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<endl;
   }
}