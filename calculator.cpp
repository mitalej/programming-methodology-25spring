#include "calculator.h"
#include <stdexcept>
#include <limits>

using namespace std;

int Calculator::add(int a, int b) {
    if ((b > 0) && (a > std::numeric_limits<int>::max() - b)) {
        throw std::overflow_error("Add of");
    }
    if ((b < 0) && (a < std::numeric_limits<int>::min() - b)) {
        throw std::overflow_error("Add uf");
    }
    return a + b;
}

int Calculator::sub(int a, int b) {
    if ((b < 0) && (a > std::numeric_limits<int>::max() + b)) {
        throw std::overflow_error("Sub overflow");
    }
    if ((b > 0) && (a < std::numeric_limits<int>::min() + b)) {
        throw std::overflow_error("Sub underflow");
    }
    return a - b;
}

int Calculator::mul(int a, int b) {
    if (a != 0 && b != 0) {
        if (a > std::numeric_limits<int>::max() / b || a < std::numeric_limits<int>::min() / b) {
            throw std::overflow_error("Mul overflow");
        }
    }
    return a * b;
}

int Calculator::div(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Div by zero");
    }
    if (a == std::numeric_limits<int>::min() && b == -1) {
        throw std::overflow_error("Div overflow");
    }
    return a / b;
}
