#include <iostream>
#include <string>
#include "shoe.h"

using namespace std;

struct footlocker
{
    public:

};


int main() {

    Shoe size, color, gender;

    cout << "Would you like to buy Mens or Womens shoes? \n";
    cin >> gender.shoegender;
    cout << "Welcome enter your shoe size: 6-13 \n";
    cin >> size.shoesize; 
    cout << "Enter your preferred shoe color: \n";
    cin >> color.shoecolor;

    size.getpair();

    color.getpattern();



}

void Shoe::getgender(){
    cout << "You are a: " << shoegender << endl;
}

void Shoe::getpair(){
    cout << "size: " << shoesize << endl;
    
}
void Shoe::getpattern(){
    cout << "With a " << shoecolor << " color pattern\n";
}
