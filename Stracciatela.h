//  Stracciatela.h
//  Project_Gelato

#ifndef STRACCIATELA_H
#define STRACCIATELA_H
#include <string>
#include <iostream>
#include "Gelato.h"
using namespace std;

class Stracciatela : public Gelato {
private:
    float cal = 2.7;
public:
    Stracciatela() : Gelato("Stracciatela", 0, 0.0) {}
    void set_type() {
        cout << "Choose type for Stracciatela (Cone | Cup): ";
        cin >> type;
    }
    float calculate_calories() {
           return size * cal;
       }
};

#endif
