#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long ans = INT_MAX;
        long long even_count = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                even_count++;
            if (a[i] % k == 0)
                ans = 0;
            else
                ans = min(ans, (long long)(k - a[i] % k));
        }

        if (k == 4)
        {
            if (even_count >= 2)
                ans = min(ans, 0LL);
            else if (even_count == 1)
                ans = min(ans, 1LL);
            else if (even_count == 0)
                ans = min(ans, 2LL);
        }

        cout << ans << endl;
    }
    return 0;
}
