#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      unordered_set<int>curr;
      unordered_set<int>prev;
      vector<int>v(n);
      for(int i = 0;i<n;i++){
         cin>>v[i];
      }
      prev.insert(v[0]);
      int sets = 1;
      for(int i = 1;i<n;i++){
         curr.insert(v[i]);
         if(prev.find(v[i]) != prev.end())prev.erase(v[i]);
         if(prev.size() == 0){
            sets ++;
            prev= curr;
         }
         
      }
      cout<<sets<<endl;
   }
}