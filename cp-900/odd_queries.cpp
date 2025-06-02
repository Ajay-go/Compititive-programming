#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n,q;
      cin>>n>>q;
      vector<long long>v(n);
      vector<long long>suff;
      vector<long long>pref;
      pref.push_back(0);
      suff.push_back(0);
      int tsum = 0;
      for(int i = 0;i<n;i++){
         cin>>v[i];
         tsum += v[i];
         pref.push_back(tsum);
      }
      int prevsum = 0;
      for(int i = n-1;i>=0;i--){
         prevsum += v[i];
         suff.push_back(prevsum);
      }
      reverse(suff.begin(),suff.end());

      // for(auto ele:pref)cout<<ele<<" ";
      // cout<<endl;
      // for(auto ele:suff)cout<<ele<<" ";
      // cout<<endl;
      


      while(q--){
         int a,b,k;
         cin>>a>>b>>k;

         int range_sum = tsum-pref[a-1]-suff[b];

         int changed_sum = (b-a+1)*k;

         int newsum = tsum +(changed_sum-range_sum);
         if(newsum % 2 == 0)cout<<"NO"<<endl;
         else cout<<"YES"<<endl;


         // cout<<"range_sum "<<range_sum<<endl;
         // cout<<"changed_sum "<<changed_sum<<endl;
         // cout<<"new_sum "<<newsum<<endl;



      }
      
   }
}
