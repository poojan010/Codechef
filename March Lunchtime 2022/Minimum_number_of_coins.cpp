#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    ll x; cin >> x;
    if(x%5 != 0){
        cout << -1 << "\n";
        return;
    }

    ll ans = x/10;
    if(x%10 == 5) ans += 1;
    cout << ans << "\n" ;
    
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
