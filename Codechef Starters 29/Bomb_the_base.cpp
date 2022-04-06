#include <bits/stdc++.h>
using namespace std;


void solve(){
    
    int n,x; cin >> n >> x;

    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    int ans = 0;

    for(int i=0; i<n; i++){
        if(arr[i] < x) ans = i + 1;
    }

    cout << ans << "\n";
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t; cin >> t;

    while (t--)
    {
        solve();
    }
    
    return 0;
}
