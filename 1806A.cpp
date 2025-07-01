#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (d < b) {
            cout << -1 << endl;
            continue;
        }

        long long dy = d - b;
        long long x_prime = a + dy;
        long long left_moves = x_prime - c;

        if (left_moves < 0) {
            cout << -1 << endl; 
        } else {
            cout << dy + left_moves << endl;
        }
    }
    return 0;
}
