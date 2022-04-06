#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    ll n; cin >> n;

    vector<ll> evens, odds;
    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] & 1) 
            odds.push_back(arr[i]);
        else
            evens.push_back(arr[i]);
    }
 
    if(odds.size() <= 1 && evens.size() >= 1){
        cout << -1; return;
    }

    if(odds.size() % 2 == 1 && evens.size() == 0){
        cout << -1; return;
    }

    if(odds.size() % 2 == 0){
        for(ll num : odds) 
            cout << num << " ";
        for(ll num : evens) 
            cout << num << " ";
    }
    else{
        cout << odds[0] << " ";
        for(int i=0; i<evens.size(); i++)
            cout << evens[i] << " ";
        for(int i=1; i<odds.size(); i++)
            cout << odds[i] << " ";
    }
    return;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    ll t; cin >> t;

    while (t--)
    {
        solve();
        cout << "\n";
    }
    
    return 0;
}
