#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    
    ll n; cin >> n;

    if(n & 1){
        ll t = (n-1)/2;
        cout << t-n;
    }
    else{
        cout << n/2;
    }

    cout << "\n";
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
