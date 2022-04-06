#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin >> n;
    string str; cin >> str;

    int ans = 0;
    
    for(int i=0; i<n; i++){
        if(i <= n-2 && str[i] == str[i+1]){
            i += 1;
        }
        ans++;
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
