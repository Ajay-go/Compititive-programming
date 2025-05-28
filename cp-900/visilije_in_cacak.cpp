#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
      long long n,k,x;
      cin>>n>>k>>x;

      long long sum = n*(n+1)/2;
      long long sum2 = (n-k)*(n+1-k)/2;
      long long mn = k*(k+1)/2;
      if(x >= mn && x <= sum-sum2) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;


   }
}
