#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){

    ll n; cin >> n;
    ll ans;
    if(n%7 == 6){
        ans = n/7 + 1;
    }
    else{
        ans = n/7;
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
