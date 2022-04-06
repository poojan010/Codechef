#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    ll n; cin >> n;
    ll ans;
    
    if(n & 1){
        ans = n/2 + 1;
    }
    else{
        ans = n/2;
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
