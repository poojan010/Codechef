#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double;
#define ull unsigned long long;
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;

#define pb push_back
#define mp make_pair
#define fo(i,n) for(int i=0;i<n;i++)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))

void ipgraph(int n, int m);
void dfs(int u, int par);
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

template <typename T>
void print(T &&t)  { cout << t << "\n"; }
void printarr(ll arr[], ll n){fo(i,n) cout << arr[i] << " ";cout << "\n";}
template<typename T>
void printvec(vector<T>v){ll n=v.size();fo(i,n)cout<<v[i]<<" ";cout<<"\n";}
template<typename T>
ll sumvec(vector<T>v){ll n=v.size();ll s=0;fo(i,n)s+=v[i];return s;}

const int mod = 1000000007;
const int N = 300, M = N;
vi g[N];
 
/*
    count sum where 0 produces 1 and one produces -1
    our goal is to make sum = 0, so ones and zeros are equal.
    if we flip one substring 
    then newSum = sum - (prev_sum_substr) + (new_sum_substr);
    ALWAYS new_sum_substr = -prev_sum_substr   
    so, newSum = sum - 2*prev_sum_substr
    if sum > 0 then find substr which have substr_sum*2 = sum
    so newSum = sum - 2*substr_sum = sum - sum = 0  
    if sum > 0 then find substr which have substr_sum*2 = sum
    here sum is -ve and substr_sum is also -ve
    so newSum = -sum - 2*(-substr_sum) = -sum + sum = 0    
    We can find substr of substr_sum*2 == sum by kadane's algorithm
*/

 
void solve(){
    int n; cin >> n;
    string s; cin >> s;

    if(n & 1){ print("NO"); return; }    

    int sum = 0;
    fo(i,n){
        if(s[i] == '0') ++sum;
        else  --sum;
    }

    if(sum == 0) { 
        vi ans = { 1, n };
        print("YES");
        printvec(ans);
        return;
    }

    if(sum > 0){
        int cur_sum = 0;
        int j = 0;
        fo(i,n){
            if(s[i] == '0') ++cur_sum;
            else  --cur_sum;
            if(cur_sum < 0){
                cur_sum = 0;
                j = i+1;
            }
            else if(cur_sum*2 == sum){
                vi ans = { (j+1) , (i+1) };
                print("YES");
                printvec(ans);
                return;
            }
        }
    }
    else {
        int cur_sum = 0;
        int j = 0;
        fo(i,n){
            if(s[i] == '0') ++cur_sum;
            else  --cur_sum;
            if(cur_sum > 0){
                cur_sum = 0;
                j = i+1;
            }
            else if(cur_sum*2 == sum){
                vi ans = { (j+1) , (i+1) };
                print("YES");
                printvec(ans);
                return;
            }
        }
    }

    print("NO");
    return;
}
 
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
    int t = 1; cin >> t;
    
    while(t--) solve();
    
    return 0;
}


void ipgraph(int n, int m){
    int i, u, v;
    while(m--){
        cin>>u>>v;
        u--, v--;
        g[u].pb(v);
        g[v].pb(u);
    }
}

void dfs(int u, int par){
    for(int v:g[u]){
        if (v == par) continue;
        dfs(v, u);
    }
}