#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;

   while (t--)
   {
      string s;
      cin >> s;

      stack<char> st;
      int ans = 0;

      int i = 0;
      bool first = true;
      while (i < s.size())
      {
         if (s[i] == ')')
         {
            if(!st.empty() && st.top() == '(')
               st.pop();
         }
         if (!first && st.empty())
            ans++;
         if(s[i] == '('){
            st.push('(');
            first = false;
         }
         i++;
      }
      if(ans > 1)cout<<"yes"<<endl;
      else cout<<"no"<<endl;
      
   }

   return 0;
}
