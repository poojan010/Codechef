#include <bits/stdc++.h>
using namespace std;


/*
k == 0  OFF
k == 1 ON
*/

void solve(){
    int n,k;
    cin >> n >> k;

    string ans;

    if(k == 0){
        int x = n%4;
        if(x == 0) ans = "Off";
        else ans = "On";
    }
    else{
        int x = n%4;
        if(x == 0) ans = "On";
        else ans = "Ambiguous";
    }

    cout << ans << "\n";
    return;
}
 
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    int t = 1; cin >> t;
    
    while(t--) solve();
    
    return 0;
}


