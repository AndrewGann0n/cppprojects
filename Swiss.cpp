#include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 10;
    int sum = add(num1, num2);
    std::cout << "Sum: " << sum << std::endl;
    
    return 0;
}
