#include <bits/stdc++.h>
using namespace std;


string solve(){

    int x,y; cin >> x >> y;

    string ans;

    if(x%2 == 0 && y%2 == 0) ans = "Janmansh";
    
    else if(x%2 == 0 && y%2 == 1) ans = "Jay";

    else if(x%2 == 1 && y%2 == 1) ans = "Janmansh";

    else if(x%2 == 1 && y%2 == 0) ans = "Jay";

    return ans;

}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t; cin >> t;

    while (t--)
    {
        string ans = solve();
        cout << ans << "\n";
    }
    
    return 0;
}
