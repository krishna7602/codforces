#include <iostream>
using namespace std;

void solve() {
    int n, k, p;
    cin >> n >> k >> p;

    if (k > n * p || k < -n * p) {
        cout << -1 << endl;
        return;
    }

    
    int minOps = (abs(k) + p - 1) / p; 
    cout << min(minOps, n) << endl; 
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
