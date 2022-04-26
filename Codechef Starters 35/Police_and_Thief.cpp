#include <bits/stdc++.h>
using namespace std;

 
void solve(){
    int x,y;
    cin >> x >> y;
    int t = 0;

    if(y > x){
        while (x != y)
        {
            x += 2;
            y += 1;
            ++t;
        }
        
    }
    else if(y < x){
        while (x != y)
        {
            x -= 2;
            y -= 1;
            ++t;
        }
    }

    cout << t << "\n";
    return;
}
 
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    int t = 1; cin >> t;
    
    while(t--) solve();
    
    return 0;
}


