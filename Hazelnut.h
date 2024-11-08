//  Hazelnut.h
//  Project_Gelato

#include <string>
#include <iostream>
using namespace std;

class Hazelnut {
private:
    string type2;
    int price2;
    float size2;

public:
    Hazelnut();
    Hazelnut(string tp, int pr, float sz) : type2(tp), price2(pr), size2(sz) {};

    string get_type2();
    int get_price2();
    float get_size2();

    void set_type2();
    void set_price2();
    void set_size2();
};

string Hazelnut::get_type2() {
    return type2;
}
int Hazelnut::get_price2() {
    return price2;
}
float Hazelnut::get_size2() {
    return size2;
}

void Hazelnut::set_type2() {
    cout << "Choose type (Cone | Cup | Bar): ";
    cin >> type2;
}
void Hazelnut::set_price2() {
    cout << "Set price: ";
    cin >> price2;
}
void Hazelnut::set_size2() {
    cout << "Set size in grams: ";
    cin >> size2;
}

// Default constructor
Hazelnut::Hazelnut() : type2(""), price2(0), size2(0.0) {}
