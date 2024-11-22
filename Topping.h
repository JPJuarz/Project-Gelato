//  Topping.h
//  Project_Gelato

#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>
#include <string>
using namespace std;

class Topping {
private:
    string name;
    float calories;
    float price;

public:
    Topping() : name(""), calories(0.0), price(0.0) {};
    Topping(string n, float c, float p) : name(n), calories(c), price(p) {};

    string get_name() {
        return name;
    }
    void set_name(string n) {
        name = n;
    }
    float get_calories() {
        return calories;
    }
    void set_calories(float c) {
        calories = c;
    }
    float get_price() {
        return price;
    }
    void set_price(float p) {
        price = p;
    }
};

#endif
