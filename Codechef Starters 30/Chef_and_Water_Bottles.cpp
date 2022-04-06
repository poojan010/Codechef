#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    ll n,x,k; 
    cin >> n >> x >> k;

    ll fill_bottle = k/x;

    ll ans = min(n,fill_bottle);

    cout << ans << "\n";

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
