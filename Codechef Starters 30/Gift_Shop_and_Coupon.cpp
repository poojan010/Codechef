    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long int


    void solve(){
        ll n,k; cin >> n >> k;

        vector<ll> items(n);
        for(int i=0; i<n; i++) 
            cin >> items[i];

        sort(items.begin(),items.end());

        int ans = 0;
        for(int i=0; i<n; i++){
            if(k >= items[i] ){
                ans += 1;
                k -= items[i];
            }
            else{
                if( (items[i]/2 + items[i]%2) <= k){ 
                    ans += 1;
                    break;
                }
            }
        }
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
