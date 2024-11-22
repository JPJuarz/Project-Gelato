// Gelato.h
// Project_Gelato

#ifndef GELATO_H
#define GELATO_H
#include <iostream>
#include <string>
#include "Topping.h"
using namespace std;

class Gelato {
protected:
    string type;
    int price;
    float size;
    Topping topping;

public:
    Gelato() : type(""), price(0), size(0.0) {};
    Gelato(string tp, int pr, float sz) : type(tp), price(pr), size(sz) {};
    string get_type() {
        return type;
    }
    int get_price() {
        return price;
    }
    float get_size() {
        return size;
    }

    void set_type() {
        cout << "Choose type (Cone | Cup): ";
        cin >> type;
    }
    void set_price() {
        cout << "Set price: ";
        cin >> price;
    }
    void set_size() {
        cout << "Set size in grams: ";
        cin >> size;
    }

    void set_topping(Topping t) {
        topping = t;
    }
    Topping get_topping() {
        return topping;
    }

    float calculate_calories() {
        return size * 0.4;
    }
};


#endif
