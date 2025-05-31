#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      string s;
      cin>>s;

      unordered_set<int>st;
      int curr = 1;
      st.insert(1);
      for(int i = 0;i<n;i++){
         if(s[i] == '<'){
            st.insert(curr+1);
            curr++;
         }else{
            st.insert(curr-1);
            curr--;
         }
      }
      cout<<st.size()<<endl;
   }
}