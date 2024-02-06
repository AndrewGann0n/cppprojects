#include <iostream>
using namespace std;



int main() {

    int time;

    double acceleration = 32;

    
    
    
    cout << "Hello, this is a freefall calculator. Please enter the time in seconds:";
    cin >> time;
    double distance = (acceleration * time * time) / 2;
    cout << "The distance is: " << distance << " feet" << endl;

    return 0;
}
