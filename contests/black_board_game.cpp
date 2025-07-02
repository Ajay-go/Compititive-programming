#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n == 2){
            cout<<"Alice"<<endl;
            continue;
        }else if(n % 2 == 0 && n % 4 == 0){
            cout<<"Bob";
        }else cout<<"Alice";
        cout<<endl;
    }

    return 0;
}