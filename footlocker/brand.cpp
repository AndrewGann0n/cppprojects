#include <iostream>
#include <string>
#include "shoe.h"
#include "brand.h"

using namespace std;

class Nike: public Brands {
    public: 
        void info(){
            cout << "Here is our Nike Air Pegasus" << endl;
        };
        void type(){
            cout << "It has three colors of blue, red, and green" << endl;
            cout << "It is priced at " << price << " and we have  " << stock << " pairs in stock." << endl;
        };
        double price = 110.55;
        int stock = 6;

};

class Jordan: public Brands {
    public: 
        void info(){
            cout << "Here is our Air Jordan Five" << endl;
        };
        void type(){
            cout << "It has three colors of red, grey, and black" << endl;
            cout << "It is priced at " << price << " and we have  " << stock << " pairs in stock." << endl;
        };
        double price = 150.55;
        int stock = 11;

};

class Brooks: public Brands {
    public: 
        void info(){
            cout << "Here is our Brooks Launch 7" << endl;
        };
        void type(){
            cout << "It has three colors of pink, gold, and yellow" << endl;
            cout << "It is priced at " << price << " and we have  " << stock << " pairs in stock." << endl;
        };
        double price = 70.25;
        int stock = 4;

};