#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
      int n,x;
      cin>>n>>x;
      long long mx = 0;
      long long sum = 0;
      for(int i = 0;i<n;i++){
         long long ele;
         cin>>ele;
         sum += ele;

         mx += ceil(ele/(x*1.0));
      }
      sum = ceil(sum/(x*1.0));
      cout<<sum<<" "<<mx<<endl;
   }
}