#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double S;
    int n, k;
    S = 0;

    for (n = 1; n <= 18; n++) {
        S = 0;
        for (k = n; k <= 20; k++) {
            S += sqrt(abs(1.0 - (k * 1.0 / n)) / (2 * n * n + k * k));
        }
    }

    cout << S << endl;

    S = 0;
    for (n = 1; n <= 18; n++) {
        S = 0;
        for (k = n; k <= 20; k++) {
            S += sqrt(abs(1.0 - (k * 1.0 / n)) / (2 * n * n + k * k));
        }
    }

    cout << S << endl;

    S = 0;
    for (n = 1; n <= 18; n++) {
        S = 0;
        for (k = n; k <= 20; k++) {
            S += sqrt(abs(1.0 - (k * 1.0 / n)) / (2 * n * n + k * k));
        }
    }

    cout << S << endl;

    S = 0;
    for (n = 18; n >= 1; n--) {
        S = 0;
        for (k = 20; k >= n; k--) {
            S += sqrt(abs(1.0 - (k * 1.0 / n)) / (2 * n * n + k * k));
        }
    }

    cout << S << endl;

    return 0;
}
