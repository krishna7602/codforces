#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;  

        int threeidx = -1, oneidx = -1;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '3') threeidx = i;
            if (s[i] == '1') oneidx = i;
        }

        if (oneidx == -1 || threeidx == -1) {
            cout << "-1" << endl;  
        } else if (threeidx > oneidx) {
            cout << "13" << endl;
        } else {
            cout << "31" << endl;
        }
    }
    return 0;
}
