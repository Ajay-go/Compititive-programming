#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int a, b, qx, qy, kx, ky;
      cin >> a >> b;
      cin >> qx >> qy;
      cin >> kx >> ky;

      set<pair<int, int>> s1;
      set<pair<int, int>> s2;
      s1.insert({{qx - a, qy - b},
                 {qx - a, qy + b},
                 {qx + a, qy + b},
                 {qx + a, qy - b},
               {qx - b, qy - a},
                 {qx - b, qy + a},
                 {qx + b, qy + a},
                 {qx + b, qy - a}});

      s2.insert({{kx - a, ky - b},
                 {kx - a, ky + b},
                 {kx + a, ky + b},
                 {kx + a, ky - b},
               {kx - b, ky - a},
                 {kx - b, ky + a},
                 {kx + b, ky + a},
                 {kx + b, ky - a}});

      int cnt = 0;
      for (auto ele : s1)
      {
         if(s2.find(ele) != s2.end())cnt++;
      }
      cout<<cnt<<endl;
   }
}