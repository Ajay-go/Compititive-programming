#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int n ,pos;
      cin>>n>>pos;
      int mn = 1e9;
      int mx = -1e9;
      for(int i = 0;i<n;i++){
         int ele;
         cin>>ele;
         mn = min(mn,ele);
         mx = max(mx,ele);
      }
      cout<<min(abs(mx-pos),abs(mn-pos)) + mx-mn<<endl;
   }
}