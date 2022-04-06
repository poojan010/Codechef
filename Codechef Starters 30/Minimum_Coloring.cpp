#include <bits/stdc++.h>
using namespace std;

#define ll long long int


void solve(){
    int n,m; cin >> n >> m;
    int x1,y1; cin >> x1 >> y1;
    int x2,y2; cin >> x2 >> y2;

    vector<vector<int>> mat(n,vector<int>(m,0));

    mat[x1-1][y1-1] = 1;
    mat[x2-1][y2-1] = 2;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i == x1-1 && j == y1-1) continue;
            if(i == x2-1 && j == y2-1) continue;
            
            map<ll,ll> mp;
            if(i-1 >= 0) mp[mat[i-1][j]]++;
            if(i+1 <= n-1) mp[mat[i+1][j]]++;
            if(j-1 >= 0) mp[mat[i][j-1]]++;
            if(j+1 <= m-1) mp[mat[i][j+1]]++;
            
            ll t = 1;
            while (mp.find(t) != mp.end()) t++;
            
            mat[i][j] = t;
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << mat[i][j] << " "; 
        }
        cout << "\n";
    }
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
