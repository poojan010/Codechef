#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin >> n;
    vector<int> fests(n);
    for(int i=0; i<n; i++) cin >> fests[i];

    int ans = 8;

    for(int day : fests){
        if(day%7 != 6 && day%7 != 0) ans++;
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
