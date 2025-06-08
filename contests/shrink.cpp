#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      vector<int> ans(n);
      
      int mid = n / 2;
      ans[mid] = n; 

      int left = mid - 1;
      int right = mid + 1;
      int odd = n - 1;
      int even = n - 2;

      while (left >= 0) {
         ans[left--] = odd;
         odd -= 2;
      }

      while (right < n) {
         ans[right++] = even;
         even -= 2;
      }

      for (int ele : ans)
         cout << ele << " ";
      cout << endl;
   }
   return 0;
}
