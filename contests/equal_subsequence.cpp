#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
      int n,one;
      cin>>n>>one;
      n-= one;
      while(one--)cout<<1;
      while(n--)cout<<0;
      cout<<endl;

   }
}