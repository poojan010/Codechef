#include <bits/stdc++.h>
using namespace std;

#define ll long long int
ll mod = 1e9+7;

void solve(){

    ll n,m; cin >> n >> m;

    vector<ll> init(n);
    for(ll i=0; i<n; i++) cin >> init[i];

    while (m--)
    {
        ll compound_indx,parts;
        cin >> compound_indx >> parts;
        ll value = init[compound_indx-1];
        init[compound_indx-1] = 0;

        vector<pair<ll,ll>> Q(parts);
        for(ll i=0; i<parts; i++){
            ll w,c; cin >> w >> c;
            Q[i] = make_pair(w,c);
        }
        for(ll i=0; i<parts; i++){
            init[Q[i].second - 1] = (init[Q[i].second - 1] + value*(Q[i].first))%mod;
        }
    }
    

    for(ll num : init) cout << num%mod << "\n";
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    solve();
    
    return 0;
}
