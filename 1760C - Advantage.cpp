#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> strengths(n);
        for (int i = 0; i < n; i++) {
            cin >> strengths[i];
        }
        long long max1 = LLONG_MIN, max2 = LLONG_MIN;
        int countMax1 = 0;
        for (int i = 0; i < n; i++) {
            if (strengths[i] > max1) {
                max2 = max1;
                max1 = strengths[i];
                countMax1 = 1;
            } else if (strengths[i] == max1) {
                countMax1++;
            } else if (strengths[i] > max2) {
                max2 = strengths[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (strengths[i] == max1 && countMax1 > 1) {
                cout << strengths[i] - max1 << " ";
            } else if (strengths[i] == max1) {
                cout << strengths[i] - max2 << " ";
            } else {
                cout << strengths[i] - max1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
