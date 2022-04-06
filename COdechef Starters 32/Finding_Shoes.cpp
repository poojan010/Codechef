#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,m; cin >> n >> m;

    int right_shoes = n;
    int left_shoes = max(0,n-m);

    cout << left_shoes + right_shoes << "\n";
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t; cin >> t;

    while (t--)
    {
        solve();
    }
    
    return 0;
}
