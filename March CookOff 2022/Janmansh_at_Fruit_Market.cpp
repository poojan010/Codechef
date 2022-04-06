#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    ll a,b,c,x;
    cin >> x >> a >> b >> c ;

    vector<ll> fruits(3);
    fruits[0] = a, fruits[1] = b, fruits[2] = c;

    sort(fruits.begin(),fruits.end());

    ll ans = 0;

    for(int i=1; i<x; i++) ans += fruits[0];

    ans += fruits[1];

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
