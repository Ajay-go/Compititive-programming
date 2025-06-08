#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
      int n,x;
      cin>>n>>x;
      int f = -1;
      int s = -1;
      for(int i = 1;i<=n;i++){
         int ele;
         cin>>ele;
         if(ele == 1){
            if(f == -1)f = i;
            s = i;
         }
      }
      if((s-f+1) <= x )cout<<"yes"<<endl;
      else cout<<"No"<<endl;
   }
}