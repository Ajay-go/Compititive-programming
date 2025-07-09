#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        unordered_map<char,int>mp,mp2;
        for(char ch:s)mp[ch]++;
        for (char ch : t)mp2[ch]++;

        int i = 0 , j = 0;
        int n = s.size();
        while(j < t.size() && i < n){
            if(s[i] == t[j]){
                if(mp[s[i]] < mp2[t[j]])break;
                if(mp[s[i]] == mp2[t[j]]){
                    
                    mp2[t[j]]--;
                    j++;

                }
            }
            mp[s[i]]--;
            i++;
        }
        if(j == t.size())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}