#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){

    int n; cin >> n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        arr[i] = abs(arr[i]);
    }
 
    ll minVal = arr[0], maxVal = arr[1];
    int minIndx = 0, maxIndx = 1;
    ll ans = 0;
    
    for(int i=0; i<n; i+=2){
        if(arr[i] < minVal){
            minVal = arr[i];
            minIndx = i;
        }
    }
    for(int i=1; i<n; i+=2){
        if(arr[i] > maxVal){
            maxVal = arr[i];
            maxIndx = i;
        }

    }

    if(arr[maxIndx] > arr[minIndx]){
        swap(arr[minIndx],arr[maxIndx]);
    }
    
    for(int i=0; i<n; i++){
        if(i%2 == 0) ans += arr[i];
        else ans -= arr[i];
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
