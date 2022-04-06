#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){

    ll n; cin >> n;

    ll sum = 0;

    vector<ll> tasks(n);
    for(int i=0; i<n; i++){
        cin >> tasks[i];
        sum += tasks[i];
    }

    ll ans = sum, cur_sum = 0;

    for(ll i=0; i<n; i++){
        cur_sum += tasks[i];

        ll temp = max(cur_sum,sum-cur_sum);
    
        ans = min(temp,ans);
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
