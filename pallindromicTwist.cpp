#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        string s;
        cin >> s; 
        
        bool flag = true;
        for (int i = 0; i < x / 2; i++) {
            int left = s[i], right = s[x - i - 1];
            if (!(abs(left - right) == 0 || abs(left - right) <= 2)) {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}
