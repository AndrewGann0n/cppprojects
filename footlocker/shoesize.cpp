#include <iostream>
#include <string>
#include "shoe.h"

using namespace std;

struct footlocker
{
    public:

};


int main() {

    Shoe size, color;

    cout << "Welcome enter your shoe size: 6-13 \n";
    cin >> size.shoesize; 
    cout << "Enter your preferred shoe color: \n";
    cin >> color.shoecolor;

    size.getpair();

    color.getpattern();



}

void Shoe::getpair(){
    cout << "You are a size: " << shoesize << endl;
    
}
void Shoe::getpattern(){
    cout << "With a " << shoecolor << " color pattern\n";
}