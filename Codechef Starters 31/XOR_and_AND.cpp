// ai XOR aj < ai & aj
// for this to be true
// for this to be true
// index of last set bit (left to right) in ai
// and index of last set bit (left to right) in aj
// should be same 
// for example 
// ai 0001010110    <- so 1 at the 4th index(right to left)
// aj 0001101010    so ai & aj for 4 index will be 1 and ai XOR aj for 4th index will be 0.

#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    
    ll n; cin >> n;
    vector<ll> arr(n);
    for(int i=0; i<n; i+=1) cin >> arr[i];

    map<ll,ll> mp;

    for(int i=0; i<n; i+=1){
        int a;
        for(int j=0; j<32; j+=1){
            int x = 1 << j;
            if(arr[i] & x) a = j;   //we will find max index of set bit.
        }
        mp[a] += 1;     // numbers with same index of last set bit (right to left)
    }                   // will make successful pair.

    ll ans = 0;

    for(auto it : mp){
        ll t = it.second;
        ans += ((t)*(t-1))/2;       // finding pairs
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
