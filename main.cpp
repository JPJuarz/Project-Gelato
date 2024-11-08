//  main.cpp
//  Project_Gelato

#include <iostream>
#include <string>
#include "Stracciatela.h"
#include "Hazelnut.h"
#include "Vanilla.h"


int main() {
//STRACCIATELA
    Stracciatela iceCream1;
    iceCream1.set_type();
    iceCream1.set_price();
    iceCream1.set_size();

    cout << "\nStracciatela Details:" << endl;
    cout << "Type: " << iceCream1.get_type() << endl;
    cout << "Price: $" << iceCream1.get_price() << endl;
    cout << "Size: " << iceCream1.get_size() << " grams" << endl;

//HAZELNUT
    Hazelnut iceCream2;
    iceCream2.set_type2();
    iceCream2.set_price2();
    iceCream2.set_size2();

    cout << "\nHazelnut Details:" << endl;
    cout << "Type: " << iceCream2.get_type2() << endl;
    cout << "Price: $" << iceCream2.get_price2() << endl;
    cout << "Size: " << iceCream2.get_size2() << " grams" << endl;

//VANILLA
    Vanilla iceCream3;
    iceCream3.set_type3();
    iceCream3.set_price3();
    iceCream3.set_size3();

    cout << "\nVanilla Details:" << endl;
    cout << "Type: " << iceCream3.get_type3() << endl;
    cout << "Price: $" << iceCream3.get_price3() << endl;
    cout << "Size: " << iceCream3.get_size3() << " grams" << endl;

    cout << "Total: " << iceCream1.get_price() + iceCream2.get_price2() + iceCream3.get_price3() << "$" << endl;

    return 0;
}
