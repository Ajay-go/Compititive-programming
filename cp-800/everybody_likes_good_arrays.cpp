// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//    int t;
//    cin >> t;

//    while (t--)
//    {
//       int n;
//       cin >> n;
//       vector<int> v(n);
//       int cnt = 0;
//       for (int i = 0; i < n; ++i)
//       {
//          int ele;
//          cin >> ele;
//          if(i > 0){
//             int prev = v.back();
//             int curr = ele;
//             if((prev % 2 == 0 && curr %2 == 0) || (prev %2 != 0 && curr %2 != 0)){
//                cnt ++;
//                v.pop_back();
//                v.push_back(prev*curr);
//             }
//             else {
//                v.push_back(ele);
//             }
//          }
//          else v.push_back(ele);
//       }
//       cout<<cnt;
//       cout<<endl;
//    }

//    return 0;
// }


#include<iostream>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   int t;
   cin >> t;

   while (t--)
   {
      int ans = 0;
      int n;
      cin >> n;
      int prev = -1;
      int curr = -1;
      for (int i = 0; i < n; i++)
      {
         int num;
         cin >> num;

         prev = curr;
         curr = num;
         if (i > 0)
         {
            if ((prev % 2 == 0 && curr % 2 == 0) || (prev % 2 != 0 && curr % 2 != 0))
            {
               ans++;
            }
         }
      }
      cout << ans << "\n";
   }
}
