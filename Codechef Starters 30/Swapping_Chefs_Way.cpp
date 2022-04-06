#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    int n; cin >> n;
    string str; cin >> str;

    if(n <= 2){
        cout << "YES";
        return;
    }

    int l,r;
    if(n%2 == 0) l = (n/2) - 1, r = n/2;
    else l = n/2, r = l + 1;
    
    string left;
    for(int i=0; i<=l; i++){
        left += min(str[i],str[n-1-i]);
    }

    string right;
    for(int i=r; i<n; i++){
        right += max(str[i],str[n-1-i]);
    }

    for(int i=1; i<left.length(); i++){
        if(left[i] < left[i-1]){
            cout << "NO";
            return;
        }
    }

    if(right.front() < left.back()){
        cout << "NO";
        return;
    }

    for(int i=1; i<right.length(); i++){
        if(right[i] < right[i-1]){
            cout << "NO";
            return;
        }
    }

    cout << "YES";
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
