#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int ele;
            cin >> ele;

            if (i == 0) {
                // First element: replace 1 with 2
                ans.push_back(ele == 1 ? 2 : ele);
            } else {
                if (ele == 1) {
                   if(ans.back() != 2) ans.push_back(2); 
                   else ans.push_back(3); // Avoid 1 as it divides anything
                } else {
                    // Make sure ele is not divisible by previous
                    if (ele % ans.back() == 0)
                        ans.push_back(ele + 1);
                    else
                        ans.push_back(ele);
                }
            }
        }

        for (int ele : ans) cout << ele << " ";
        cout << endl;
    }
}
