#include <iostream>
#include <string>
#include "shoe.h"
#include "brand.cpp"
#include "brand.h"



using namespace std;


int main() {

    Shoe size, color, gender, brand;

    Nike sh;
    Jordan gh;

    Brands *shoemarketing1 = &sh;
    Brands *shoemarketing2 = &gh;

    cout << "Welcome to Footlocker! \n";

    shoemarketing1->info();
    shoemarketing1->type();
    shoemarketing2->info();
    shoemarketing2->type();




    cout << "Would you like to buy Mens or Womens shoes? \n";
    cin >> gender.shoegender;
    cout << "Enter your shoe size: 6-13 \n";
    cin >> size.shoesize; 
    cout << "Enter the shoe color you want: \n";
    cin >> color.shoecolor;
    cout << "Enter the shoe brand you want: \n";
    cin >> brand.shoebrand;

    gender.getgender();

    size.getpair();

    color.getpattern();

    brand.getbrand();



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
void Shoe::getbrand(){
    cout << "In a " << shoebrand << " brand shoe \n";
}
