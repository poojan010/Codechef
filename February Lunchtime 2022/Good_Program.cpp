#include <bits/stdc++.h>
using namespace std;


void solve(){
    
    int n; cin >> n;

    if(n%4 == 0) cout << "Good";
    else cout << "Not Good" ;

    cout << "\n";
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
