#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int N = 12;
    long double a[N];

    a[0] = 1;
    a[1] = 2;

    for (int i = 1; i < N - 1; i++) {
        a[i+1] = (3 * a[i] - 2) * (3 * a[i] - 2);  // (3a_n - 2)^2
    }

    for (int i = 0; i < N; i++) {
        cout << "a[" << i << "] = " << fixed << setprecision(0) << a[i] << endl;
    }

    return 0;
}
