#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
      string s,temp;
      cin>>s;
      cin>>temp;

      if(s == temp ){
         cout<<"YES"<<endl;
         continue;
      }
      unordered_set<char>st;
      if(s.size() < temp.size()){
         cout<<"NO"<<endl;
         continue;
      }
      for(char ch:temp)st.insert(ch);
      int i = 0;
      int j = 0;
      while(i < s.size() && j < temp.size()){
         if(s[i] == temp[j]){
            j++;
         }
         i++;
      }
      if(j < temp.size()){
         cout<<"NO"<<endl;
         continue;
      }
      bool flag = true;
      while(i < s.size()){
         if(st.find(s[i]) != st.end()){
            flag = false;
            break;
         }
         i++;
      }
      if(flag)cout<<"YES"<<endl;
      else cout<<"No"<<endl;
   }
}