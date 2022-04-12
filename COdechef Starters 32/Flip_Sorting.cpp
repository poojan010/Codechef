/*
    We have to search 1 from left side, 
    index of 1 = i 
    and then flip substring from index i to n-1
    this is how x(n-i) will always be lower than previous val as i increases
    so it won't repeat
    store the operations (i,x)
    print operations
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void flip(string& s, int index){
    for(int i = index; i< s.length(); ++i){
        if(s[i] == '1') s[i] = '0';
        else s[i] = '1';
    }
    return;
}

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<pair<int,int>> ops;

    for(int i=0; i<n; ++i){
        if(s[i] == '0') continue;
        flip(s,i);
        ops.push_back({i+1,n-i});
    }

    cout << ops.size() << "\n";
    for(auto op : ops) cout << op.first << " " << op.second << "\n";
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
