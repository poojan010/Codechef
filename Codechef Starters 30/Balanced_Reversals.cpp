#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    ll n; cin >> n;
    string str; cin >> str;

    sort(str.begin(),str.end());

    cout << str << "\n";

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
