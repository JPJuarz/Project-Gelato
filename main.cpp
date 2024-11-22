//  main.cpp
//  Project_Gelato

#include <iostream>
#include <string>
#include "Stracciatela.h"
#include "Hazelnut.h"
#include "Vanilla.h"
#include "Topping.h"

int main() {
    // STRACCIATELA
    Stracciatela iceCream1;
    iceCream1.set_type();
    iceCream1.set_price();
    iceCream1.set_size();
    
    // Topping Stracciatela
    Topping topping1("Oreos", 150, 0.5); // Topping Example
    iceCream1.set_topping(topping1);
    
    cout << "\nStracciatela Details:" << endl;
    cout << "Type: " << iceCream1.get_type() << endl;
    cout << "Price: $" << iceCream1.get_price() << endl;
    cout << "Size: " << iceCream1.get_size() << " grams" << endl;
    cout << "Calories: " << iceCream1.calculate_calories() << " kcal" << endl;
    cout << "Topping: " << iceCream1.get_topping().get_name() << endl;
    
    // HAZELNUT
    Hazelnut iceCream2;
    iceCream2.set_type();
    iceCream2.set_price();
    iceCream2.set_size();
    
    // Topping Hazelnut
    Topping topping2("Chocolate Chips", 200, 0.7); // Topping Example
    iceCream2.set_topping(topping2);
    
    cout << "\nHazelnut Details:" << endl;
    cout << "Type: " << iceCream2.get_type() << endl;
    cout << "Price: $" << iceCream2.get_price() << endl;
    cout << "Size: " << iceCream2.get_size() << " grams" << endl;
    cout << "Calories: " << iceCream2.calculate_calories() << " kcal" << endl;
    cout << "Topping: " << iceCream2.get_topping().get_name() << endl;
    
    // VANILLA
    Vanilla iceCream3;
    iceCream3.set_type();
    iceCream3.set_price();
    iceCream3.set_size();
    
    // Topping Vanilla
    Topping topping3("Sprinkles", 250, 0.8); // Topping Example
    iceCream3.set_topping(topping3);
    
    cout << "\nVanilla Details:" << endl;
    cout << "Type: " << iceCream3.get_type() << endl;
    cout << "Price: $" << iceCream3.get_price() << endl;
    cout << "Size: " << iceCream3.get_size() << " grams" << endl;
    cout << "Calories: " << iceCream3.calculate_calories() << " kcal" << endl;
    cout << "Topping: " << iceCream3.get_topping().get_name() << endl;
    
    cout << "\nTotal Price: $" << iceCream1.get_price() + iceCream2.get_price() + iceCream3.get_price() << endl;
    
    return 0;
    }
