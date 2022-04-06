#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    ll n; cin >> n;

    ll ans = n-1;

    ll t = 2;
    while(t <= n){
        ans -= 1;
        t *= 2;
    }

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
