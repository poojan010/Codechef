#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){

    ll n; cin >> n;

    if(n%2 == 1) cout << -1;
    else{
        cout << 0 << " " << n/2 << "\n";
        cout << n/2 << " " << 0 << "\n";
        cout << n << " " << (n/2) << "\n";
        cout << (n/2) << " " << n << "\n";
    }

    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
