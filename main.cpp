#include <iostream>

using namespace std;

int main() {
    int x1 = 0;
    int v1 = 0;
    int x2 = 0;
    int v2 = 0;
    int sum1 = 0;
    int sum2 = 0;

    cin >> x1;
    // cout << x1 << endl;
    cin >> v1;
    // cout << v1 << endl;
    cin >> x2;
    // cout << x2 << endl;
    cin >> v2;
    // cout << v2 << endl;

    if (v1 <= v2) {
        cout << "NO" << endl;
        return 0;
    }

    sum1 = x1 + v1;
    sum2 = x2 + v2;

    // cout << "x1\tv1\tsum1" << endl;
    // cout << "x2\tv2\tsum2" << endl;

    // cout << x1 << "\t" << v1 << "\t" << sum1 << endl; 
    // cout << x2 << "\t" << v2 << "\t" << sum2 << endl; 
    for (int i = 0; i < 10000; ++i) {
        if (sum1 == sum2) {
            cout << "YES" << endl;
            return 0;
        }
        // cout << sum1 << "\t" << v1 << "\t";
        // cout << sum2 << "\t" << v2 << "\t";
        sum1 += v1;
        // cout << sum1 << endl;
        sum2 += v2;
        // cout << sum2 << endl;
        if (sum2 < sum1) {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    return 0;
}