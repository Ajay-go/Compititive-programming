#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      string l,r;
      cin>>l>>r;
      int ans = 0;
      string res = "";
      for(int i = 0;i<l.size();i++){
         int  ch1 = l[i]-'0';
         int ch2 = r[i]-'0';

         if((ch2-ch1) <= 1)res += l[i];
         else res += (ch1 +1 +'0');
      }
      for(int i = 0;i<l.size();i++){
         if(res[i] == l[i])ans++;
         if(res[i] == r[i])ans++;
      }
      cout<<res<<endl;
      
      
   }
}