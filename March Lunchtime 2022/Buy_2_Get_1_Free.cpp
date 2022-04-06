#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    
    ll n,x; 
    cin >> n >> x;
    
    ll items,ans;
    
    if(n%3 == 0)
        items = (n/3)*2;
    
    else if(n%3 == 2)
        items = ((n+1)/3)*2;
    
    else
        items = ((n-1)/3)*2 + 1;
    

    ans = items*x;
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
