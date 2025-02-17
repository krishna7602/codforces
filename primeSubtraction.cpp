#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        long long x, y;  // FIXED: Use long long
        cin >> x >> y;
        long long dif = abs(x - y);  
        if(dif==1) {
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }
    return 0;
}
