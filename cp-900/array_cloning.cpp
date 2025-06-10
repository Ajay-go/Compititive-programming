#include <iostream>
#include<unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  // Fast IO

    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        unordered_map<long long, long long> mp;
        for (long long i = 0; i < n; i++)
        {
            long long ele;
            cin >> ele;
            mp[ele]++;
        }

        long long ans = 0;
        long long freq = 0;
        for (auto ele : mp)
            freq = max(freq, ele.second);

        long long curr = freq;

        while (curr < n)
        {
            ans++;
            if (curr * 2 <= n)
            {
                ans += curr;
                curr *= 2;
            }
            else
            {
                ans += (n - curr);
                curr = n;
            }
        }

        cout << ans <<endl;
      }
      return 0;

   
}
