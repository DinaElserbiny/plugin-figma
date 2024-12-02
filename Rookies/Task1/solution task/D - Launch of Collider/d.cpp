#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    string directions;
    cin >> directions;

    vector<int> positions(n);
    for (int i = 0; i < n; i++) {
        cin >> positions[i];
    }

    int minTime = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        if (directions[i] == 'R' && directions[i + 1] == 'L') {
            int time = (positions[i + 1] - positions[i]) / 2;
            minTime = min(minTime, time);
        }
    }

    if (minTime == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << minTime << endl;
    }

    return 0;
}
