//  Hazelnut.h
//  Project_Gelato

#ifndef HAZELNUT_H
#define HAZELNUT_H
#include <string>
#include <iostream>
#include "Gelato.h"
using namespace std;

class Hazelnut : public Gelato {
private:
    float cal = 3.4;
public:
    Hazelnut() : Gelato("Hazelnut", 0, 0.0) {}
    void set_type() {
        cout << "Choose type for Hazelnut (Cone | Cup | Bar): ";
        cin >> type;
    }
    float calculate_calories() {
           return size * cal;
       }
};

#endif
