//  Vanilla.h
//  Project_Gelato

#ifndef VANILLA_H
#define VANILLA_H
#include <string>
#include <iostream>
#include "Gelato.h"
using namespace std;

class Vanilla : public Gelato {
private:
    float cal = 2.1;
public:
    Vanilla() : Gelato("Vanilla", 0, 0.0) {}
    void set_type() {
        cout << "Choose type for Vanilla (Cone | Cup): ";
        cin >> type;
    }
    float calculate_calories() {
           return size * cal;
       }
};

#endif
