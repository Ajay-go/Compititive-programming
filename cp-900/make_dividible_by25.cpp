#include<bits/stdc++.h>
using namespace std;
int helper(string digits,string str){
   int n = str.size();
   char d1 = digits[1];
   int oper = 0;
   int i = n-1;
   while(i >= 0 && str[i] != d1){
      oper++;
      i--;
   }
   i--;
   char d2 = digits[0];
   while(i >= 0 && str[i] != d2){
      oper++;
      i--;
   }
   return oper;
}
int main(){
   int t;
   cin>>t;
   while(t--){
      string n;
      cin>>n;

      vector<string> v = {"00","25","75","50"};

      int ans = 1e9;
      for(int i = 0;i<4;i++){
         ans = min(ans,helper(v[i],n));
      }
      cout<<ans<<endl;

   }
}