#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){

    ll n; cin >> n;
    ll count = 0;

    vector<ll> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(arr[i] == 0) count++;
    }

    cout << max(count,n-count);
    
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


// Example : 0 0 3 1 2 0
// For 0 to be mex it must not be included in array.
// Same for all others (1,2,3..)
// So for 0 mex => we can select all other member 
// and add all single values in different array
// so maximum subarrays are possible.
// For 1 to be mex : we have to include 0 and 1 in mex
// so result for 1 is <= (res for 0 to be mex)

// so 0 mex will give max answer.