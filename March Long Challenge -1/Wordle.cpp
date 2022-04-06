#include <bits/stdc++.h>
using namespace std;

void solve(){
    string hidden; cin >> hidden;
    string guess; cin >> guess;

    string ans;
    for(int i=0; i<guess.length(); i++){
        if(hidden[i] == guess[i]){
            ans.push_back('G');
        }
        else {
            ans.push_back('B');
        }
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
