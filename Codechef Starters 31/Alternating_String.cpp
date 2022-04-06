#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    int n; cin >> n;
    string str; cin >> str;

    int zeros = 0, ones = 0;

    for(char ch : str){
        if(ch == '0') zeros += 1;
        else ones += 1;
    }

    if(ones == zeros) cout << ones*2;
    else cout << min(ones,zeros)*2 + 1;
    cout << "\n";
    
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
