#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
      string s1,s2;
      cin>>s1>>s2;
      unordered_map<char,int> mp;
      int n1 = s1.size();
      int n2 = s2.size();
      int j = n1-1;
      for(int i = n2-1;i>=0;i--){
         while(j >= 0 && s1[j] != s2[i]){
            j--;
            
         }
         mp[s2[i]] = j;
      }
     
      // for(auto ele:mp)cout<<ele.first<<"-"<<ele.second<<" ";
      // cout<<endl;
      unordered_map<char,int>needed;
      unordered_map<char,int>have;
      bool flag = false;
      for(int i = 0;i<n2;i++){
         char ch = s2[i];
         int idx = mp[ch];
         for(int j = idx;j<n1 && needed.find(ch) == needed.end();j++){
            if(ch == s1[j]){
               have[ch]++;
            }
         }
         needed[ch]++;
        
         
         
      }
      
      for(auto ele:needed){
         // cout<<ele.first<<" "<<ele.second<<" "<<have[ele.first]<<endl;
         if(have[ele.first] != needed[ele.first]){
            flag = true;
            break;
         }
      }
      
      if(flag)cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
   }
}