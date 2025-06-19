#include<iostream>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      bool flag = false;
      for(int i = 0;i<n;i++){
         int ele;
         cin>>ele;
      }
     
      if(n % 2 == 0){
         cout<<2<<endl;
         cout<<1<<" "<<n<<endl;
         cout<<1<<" "<<n<<endl;
      }
      else{
         cout<<4<<endl;
         cout<<1<<" "<<n-1<<endl;
         cout<<1<<" "<<n-1<<endl;
         cout<<n-1<<" "<<n<<endl;
         cout<<n-1<<" "<<n<<endl;
      }
   }
}