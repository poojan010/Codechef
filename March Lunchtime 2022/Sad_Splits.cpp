#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    string str;
    cin >> str;

    int last = str.back() - '0';

    for(ll i=str.length()-2; i>=0; i--){
        int num = str[i] - '0';
        if(num%2 == 1 && last%2 == 1){
            cout << "YES" << "\n" ; return;
        }
        if(num%2 == 0 && last%2 == 0){
            cout << "YES" << "\n"; return;
        }
    }

    cout << "NO" << "\n";
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    ll t; cin >> t;

    while (t--)
    {
        solve();
    }
    
    return 0;
}
