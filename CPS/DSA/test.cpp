#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int untreated = 0, available = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == -1) {
            if (available > 0) {
                available--; // one officer handles the crime
            } else {
                untreated++; // no officer available
            }
        } else {
            available += x; // recruit officers
        }
    }

    cout << untreated << "\n";
    return 0;
}
