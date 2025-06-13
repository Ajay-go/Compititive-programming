#include<iostream>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
      string s;
      cin>>s;

      int n = s.size();
      if(s[0] == s[n-1]){
         cout<<s<<endl;
         continue;
      }
      else{
         if(s[0] == 'a')s[n-1] = 'a';
         else s[n-1] = 'b';
         cout<<s<<endl;
      }
   }
}