#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int cnt0 = 0;
        int cnt1 = 0;

        for (char ch : s)
        {
            (ch == '0') ? cnt0++ : cnt1++;
        }
        if (cnt0 == cnt1)
        {
            cout << 0 << endl;
            continue;
        }
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                if (cnt1 == 0)
                {
                    ans = s.size() - i;
                    break;
                }
                cnt1--;
            }
            else
            {
                if (cnt0 == 0)
                {
                    ans = s.size() - i;
                    break;
                }
                cnt0--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}