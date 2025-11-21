#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    const double EPSILON = 0.0001;
    double sum = 0.0;
    double current_term = 1.0;
    int n = 0;

    while (std::abs(current_term) >= EPSILON) {
        sum += current_term;
        n++;
        
        // Рекурентна формула для a_n: a_n = a_{n-1} * (-4) / ((2n)(2n-1))
        current_term *= -4.0 / ((2.0 * n) * (2.0 * n - 1.0));
    }

    std::cout << std::fixed << std::setprecision(6) << sum << std::endl;

    return 0;
}
