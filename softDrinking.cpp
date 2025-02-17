#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int tdrink = k * l;  
    int to1 = tdrink / nl;  
    int to2 = c * d;  
    int to3 = p / np;  

    cout << min({to1, to2, to3}) / n << endl; 
}
