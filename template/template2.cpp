/*OtabekJurabekov*/
 
#include <iostream>
#include <chrono>
#include <random>
#include <iomanip>
#include <algorithm>
#include <utility>
#include <fstream>
#include <numeric>
#include <sstream>
#include <functional>
#include <memory.h>
 
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <string>
#include <queue>
#include <array>
#include <stack>
#include <bitset>
#include <unordered_set>
#include <unordered_map>
 
#include <ctime>
#include <cmath>
#include <climits>
#include "stdio.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
 
using namespace std;
using ll = long long;
 
 
 
 
#define all(x) (x).begin(), (x).end()
#define lla(x) (x).rbegin(), (x).rend()
 
#define cntone(x) __builtin_popcountll(x)
#define cntzerob(x) __builtin_clzll(x)
#define cntzeroe(x) __builtin_ctzll(x)
 
#define db double
#define int long long
#define ldb long double
 
#define SQR(x) (x) * (x)
#define SZ(x) ((int)x.size())
 
#define ff first
#define ss second
#define th third
#define ins insert
#define MP make_pair
#define pb push_back
#define pf push_front
 
 
 
 
namespace algorithm{
 
    namespace commons{
 
        const long double eps = 1e-9;
        const double PI = acos(-1.);
        const int INF = 2147483640;
        const long long LLINF = 8e18;
 
        int d4x[] = {0, 0, 1, -1}, d4y[] = {1, -1, 0, 0};
        int d8x[] = {1, 1, 1, 0, 0, -1, -1, -1}, d8y[] = {0, -1, 1, -1, 1, 0, 1, -1};
        int k8x[] = {1, 1, 2, 2, -1, -1, -2, -2}, k8y[] = {2, -2, 1, -1, 2, -2, 1, -1};
 
        clock_t startTime;
        int ThisLittleSHitWillNeverWork;
        mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
 
    } using namespace commons;
 
 
    namespace functions{
 
        template <typename First, typename Second, typename Third> First binpow(First a, Second b, bool mod, Third m){if(mod) a = a % m; First res = 1; while (b > 0){if(b % 2 == 1) res = res * a; if(mod) res = res % m; a = a * a; if(mod) a = a % m; b /= 2;} return res;}
        template <typename First, typename Second, typename Third> First cnr(First a, Second b, bool mod, Third m){First t = 1, d = 1;for(First i = 1; i <= b; i += 1){t *= i; if(mod) t = t % m; d *= a - i + 1; if(mod) d = d % m;}if(mod) return ((d * binpow(t, (m - 2), mod, m))) % m;return d / t;}
 
        template <typename Type> Type gcd(Type a, Type b){return a != 0 ? gcd(b % a, a) : b;}
        template <typename Type> Type lcm(Type a, Type b){return a / gcd(a, b) * b;}
 
        template <typename First, typename Second> void maxs(First &a, Second b) {if(a < b) a = b;}
        template <typename First, typename Second> void mins(First &a, Second b) {if(a > b) a = b;}
 
        template <typename Type> Type phi(Type n) {Type result = n; for (Type i = 2; i * i <= n; i ++) {if (n % i == 0) {while (n % i == 0) n /= i; result -= result / i;}} if(n > 1){result -= result / n;}return result;}
        db getcurtime(){return (db) (clock() - startTime) / CLOCKS_PER_SEC;}
 
    } using namespace functions;
 
 
    namespace io{
 
        template <typename First, typename Second> ostream& operator << (ostream &os, const pair<First, Second> &p) {return os << p.first << " " << p.second;}
        template <typename First, typename Second> ostream& operator << (ostream &os, const map<First, Second> &mp) {for(auto it : mp){os << it.first << " " << it.second << "; ";} return os;}
        template <typename First> ostream& operator << (ostream &os, const vector<First> &v) {bool space = false; for(First x : v) {if(space) os << " "; space = true; os << x;} return os;}
        template <typename First> ostream& operator << (ostream &os, const set<First> &st) {bool space = false; for(First x : st) {if(space) os << " "; space = true; os << x;} return os;}
        template <typename First> ostream& operator << (ostream &os, const multiset<First> &st) {bool space = false; for(First x : st) {if(space) os << " "; space = true; os << x;} return os;}
 
        template <typename First, typename Second> istream& operator >> (istream &is, pair<First, Second> &p) {return is >> p.first >> p.second;}
        template <typename First> istream& operator >> ( istream &is, vector<First> &v ) { for( First &x : v ) {is >> x;} return is;}
 
        long long fastread() {char c; long long d = 1, x = 0; do c = getchar(); while(c == ' ' || c == '\n'); if(c == '-') c = getchar(), d = -1; while(isdigit(c)) {x = x * 10 + c - '0'; c = getchar();} return d * x;}
 
    } using namespace io;
 
 
    namespace _to_string{
 
        static bool sep = false;
        using std::to_string;
 
        string to_string(bool x) {return(x ? "true" : "false" );}
        string to_string(const string & s) {return "\"" + s + "\"";}
        string to_string(const char * s) {return "\"" + string( s ) + "\"";}
        string to_string(const char & c) {string s; s += c; return "\'" + s + "\'";}
 
        template <typename Type> string to_string(vector<Type>);
        template <typename First, typename Second> string to_string(pair<First, Second>);
        template <typename Collection> string to_string(Collection);
 
        template <typename First, typename Second> string to_string(pair<First, Second> p ){return "{" + to_string(p.first) + ", " + to_string(p.second) + "}";}
        template <typename Type> string to_string(vector<Type> v) {bool sep = false; string s = "["; for(Type x: v) {if(sep) s += ", "; sep = true; s += to_string( x );} s += "]"; return s;}
        template <typename Collection> string to_string(Collection collection) {bool sep = false; string s = "{"; for(auto x: collection){if(sep) s += ", "; sep = true; s += to_string(x);} s += "}"; return s;}
 
    } using namespace _to_string;
 
 
    namespace PRIME{
 
        vector <bool> Check_Prime;
        vector <long long> Primes;
 
        template <typename Type> bool check_prime_sqrt(Type x) {for (Type d = 2; d * d <= x; d ++) {if (x % d == 0) {return false;}} return true;}
        template <typename Type> void init_eratosthenes(Type n){Primes.clear(); Check_Prime.assign(n + 1, true);for (Type p = 2; p * p <= n; p++) {if (Check_Prime[p]) {for (Type i = p * p; i <= n; i += p)Check_Prime[i] = false;}}for (Type p = 2; p <= n; p++) {if (Check_Prime[p]) {Primes.push_back(p);}}}
        template <typename Type> bool MillerRabin(Type n){function <bool(Type, Type, Type, Type)> check_composite = [&](Type n, Type a, Type d, int s) -> bool{Type x = binpow(a, d, 1, n);if (x == 1 || x == n - 1){return false;}for (Type r = 1; r < s; r++) {x = (ll)x * x % n;if (x == n - 1){return false;}}return true;};function <bool(Type, Type)> miller_rabin = [&](Type n, Type iter) -> bool{if (n < 4){return n == 2 || n == 3;}Type s = 0, d = n - 1;while ((d % 2) == 0) { d /= 2; s ++; }for (Type i = 0; i < iter; i++) {Type a = 2 + rand() % (n - 3);if (check_composite(n, a, d, s))return false;}return true;}; return miller_rabin(n, 10);}
 
 
        bool PrimeFilled = false;
        template <typename Type> struct NthPrime {
 
            const long long NN = 2000000, P = 510510, Q = 92160;
            vector <Type> prime, pi, e;
            vector <bool> f;
 
            void init() {prime.assign(NN + 1, 0); pi.assign(NN + 1, 0), e.assign(P, 0); f.assign(1000010, false); for (Type i = 2; i <= NN; i ++) { if (!prime[i]) { prime[++prime[0]] = i, pi[i] = pi[i - 1] + 1;}else{pi[i] = pi[i - 1];}for (Type j = 1; j <= prime[0] && i <= NN / prime[j]; j ++) {prime[i * prime[j]] = 1;if (i % prime[j] == 0){break;}}}for (Type i = 0; i < P; i ++){e[i] = i;}for (Type i = 1; i < 8; i ++) {for (Type j = P - 1; j >= 0; j --){e[j] -= e[j / prime[i]];}}}
            Type get_phi(Type m, Type n) {if (n == 7){return m / P * Q + e[m % P];}if (m < prime[n]){return 1;}if (m <= NN && m <= prime[n] *1ll* prime[n] * prime[n]) {Type ans = pi[m] - n + 1;for (Type i = n + 1, l = pi[ll(sqrt(m + 0.1))]; i <= l; i ++){ans += pi[m / prime[i]] - i + 1;}return ans;}return get_phi(m, n - 1) - get_phi(m / prime[n], n - 1);}
            Type get_pi(Type m) {if (m <= NN){return pi[m];}Type n = pi[ll(cbrt(m - 0.1)) + 1];Type ans = get_phi(m, n) + n - 1;for (Type i = n + 1, l = pi[ll(sqrt(m + 0.1))]; i <= l; i ++){ans -= get_pi(m / prime[i]) - i + 1;}return ans;}
            Type get_pn(Type n) {if (n <= prime[0]){return prime[n];}Type x = n * (log(n) + log(log(n)) - 1) + n * (log(log(n)) - 2) / log(n) - 6 * n / 1000;Type y = n * log(log(n)) * log(log(n)) / log(n) / log(n);y = min(y, 3500000ll);Type l = x, r = x + y, flag = 0;for (int i = 0; i < 2; i ++) {Type m = l + r >> 1;Type pm = get_pi(m);if (pm >= n){r = m, flag = 0;}else{l = m + 1, flag = pm;}}Type count = flag ? flag : get_pi(l - 1);for (int i = 1, li = pi[ll(sqrt(r + 0.1))]; i <= li; i ++) {for (int j = ((l - 1) / prime[i] + 1) * prime[i] - l; j <= r - l + 1; j += prime[i]){f[j] = true;}}for (int i = 0; i <= r - l + 1; i ++){if (!f[i]) {count ++;if(count == n){return i + l;}}}return -1;}
 
        }; NthPrime <long long> NPrime;
 
        template <typename Type> Type nthprime(Type n){if(PrimeFilled) return NPrime.get_pn(n); NPrime.init(); PrimeFilled = true; return NPrime.get_pn(n);}
 
    } using namespace PRIME;
 
 
    template<typename First, typename Second, typename Third> struct triple{
        First first;
        Second second;
        Third third;
 
        friend bool operator < ( const triple<First, Second, Third> &t1, const triple<First, Second, Third> &t2 ) {
            if( t1.first != t2.first ) return t1.first < t2.first;
            if( t1.second != t2.second ) return t1.second < t2.second;
            return t1.third < t2.third;
        }
 
        friend bool operator == (const triple<First, Second, Third> &t1, const triple<First, Second, Third> &t2 ) { return t1.first == t2.first && t1.second == t2.second && t1.third == t2.third; }
        friend ostream& operator << (ostream &os, const triple<First, Second, Third> &t ) { return os << t.first << " " << t.second << " " << t.third;  }
        friend istream& operator >> (istream &is, triple<First, Second, Third> &t ) { return is >> t.first >> t.second >> t.third; }
        friend string to_string( const triple<First, Second, Third> &t ){ return "{" + to_string( t.first ) + ", " + to_string( t.second ) + ", " + to_string( t.third ) + "}"; }
    };
 
} using namespace algorithm;
 
 
 
 
void debug_out(){}
template <typename Head, typename... Tail> void debug_out(Head H, Tail... T){cerr << H << "}, {"; debug_out(T...);}
template <typename Head, typename... Tail> void dbg(Head H, Tail... T){cerr << "[{"; debug_out(H, T...); cerr << "}]\n";}
 
 
#ifdef WTF
#define debug(...)  cerr << "[" << #__VA_ARGS__ << "] : ", dbg(__VA_ARGS__)
#else
#define debug(...)  ThisLittleSHitWillNeverWork = 22
#endif
 
 
 
 
const int MOD = 1e9 + 7;
const int N = 1e6 + 9;
 
//
// Created by Otabek Jurabekov on 4/12/22.
//
template <typename Type> struct Fenwick{
    int Sz; vector <Type> t, arr;
    Fenwick(int _n, Type _m = 0){
        t.assign(_n, _m); Sz = _n;
    }
    Type com(Type F, Type S){return F + S;}
 
    void memset(int l, int r, Type del){
        for(int i = t[l]; i <= r; i ++){
            t[i] = del;
        }
    }
    void upd_add(int i, Type delta){
        for(; i < Sz; i |= (i + 1)){
            t[i] = com(t[i], delta);
        }
    }
    Type get(int i){
        Type res = 0;
        for(; i >= 0; i = (i & (i + 1)) - 1){
            res = com(t[i], res);
        }
        return res;
    }
    void clear(){
        Sz = 0; t.clear();
    }
    void assign(int _n, Type el){
        Sz = _n; t.assign(_n, el);
    }
};
 
long long get_inversions(vector <int> &a, int n, int mxelement){
    Fenwick <int> fnw(mxelement, 0);
    long long count = 0, var;
    for(int i = 0; i < n; i ++){
        var = a[i]; fnw.upd_add(var, 1);
        count += i + 1 - fnw.get(var);
    }
    return count;
}
 
void t_main(int TC){
    int n; cin >> n;
    vector <int> a(n + 1);
    for(int i = 1; i <= n; i ++){
        cin >> a[i];
    }
    int ans = 0;
    Fenwick <int> F(n + 100);
    for(int i = 1; i <= n; i ++){
        ans += i - 1 - F.get(a[i] - 1);
        F.upd_add(a[i], 1);
    }
    cout << ans << "\n";
}
 
 
 
 
 
 
 
#define TESTCASES
signed main(){
    startTime = clock();
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 
#ifdef WTF
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
 
    int T = 1;
#ifdef TESTCASES
    cerr << "Number of test cases:\n"; cin >> T;
#endif
 
    for(int TC = 1; TC <= T; TC ++) t_main(TC);
    cerr << "\nTime: " << ll(getcurtime() * 1000) << " ms\n";
    return 0;
}