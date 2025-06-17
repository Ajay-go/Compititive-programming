#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      int n ;
      string s;
      cin>>n>>s;

      unordered_map<int,int>front;
      unordered_map<int,int>back;

      front[s[0]]++;

      for(int i = 1;i<n;i++){
         back[s[i]] ++;
      }
      bool ans = false;
      for(int i = 1;i<n-1;i++){
         char ch = s[i];
         back[ch]--;
         if(back[ch] == 0)back.erase(ch);

         if(front.count(ch) > 0 || back.count(ch) > 0){
            ans = true;
            break;
         }
         front[ch]++;
      }
      if(ans)cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
      
   }
}