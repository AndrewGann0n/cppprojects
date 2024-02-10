#include <iostream>

using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

struct Swiss {
    string city = ['Basel', 'Bern', 'Zurich', 'Geneva', 'Lausanne', 'Lugano', 'Lucerne', 'St. Gallen', 'Winterthur', 'Biel/Bienne'];
    char bus = ['11', '12', '13', '14', '15', '16', '17', '18', '19', '20'];
};




void Swiss::print() {
    std::cout << "City: " << city << std::endl;
    std::cout << "Bus: " << bus << std::endl;
}




int main() {
    

    
    int sum = add(num1, num2);
    std::cout << "Sum: " << sum << std::endl;
    
    return 0;
}
