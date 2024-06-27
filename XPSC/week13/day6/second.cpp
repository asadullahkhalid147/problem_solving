#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll h, n;
    cin >> h >> n;

    vector<ll> A(n), C(n);

    for (ll &i : A)
        cin >> i;
    for (ll &i : C)
        cin >> i;
    
    auto chk = [&](ll t){
        ll dmg = 0;
        for (int i = 0; i < n and dmg < h; i++){
            ll cnt = (t - 1) / C[i] + 1;

            if (cnt >= h)
                return true;

            dmg += cnt * A[i];
        }
        return dmg >= h;
    };

    ll L = 1, H = 1e12;

    while (L < H){
        ll M = (L + H) / 2;
        chk(M) ? H = M : L = M + 1;
    }
    cout << L << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int tc;
    cin >> tc;

    while (tc--)
        solve();
}