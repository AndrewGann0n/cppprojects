#include <iostream>
#include <string>

using namespace std;

class Shoe 
{
    public: 
        char shoesize[10];
        char shoecolor[10];
        void getpair();
        void getpattern();
};

int main() {

    Shoe size, color;

    cout << "Welcome enter your shoe size: 1-13 \n";
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