#include "laptop.h"
#include <iostream>

int main() {
    laptop first ("Xiaomi", 2, 8, 4, 1);
    first.country = "China";
    first.price = 800;
    first.get_inf();
    cout <<"The country of origin: "<< first.country << endl;
    cout <<"Price: "<< first.price << '$' << endl;

    laptop second ("Apple", 3, 16, 8, 2);
    second.country = "USA";
    second.price = 1000;
    second.get_inf();
    cout <<"The country of origin: "<< second.country << endl;
    cout <<"Price: "<< second.price << '$' << endl;

    laptop third ("Lenovo", 2, 8, 8, 2);
    third.country = "Japan";
    third.price = 700;
    third.get_inf();
    cout <<"The country of origin: "<< third.country << endl;
    cout <<"Price: "<< third.price << '$' << endl;
}