//  Stracciatela.h
//  Project_Gelato

#include <string>
#include <iostream>
using namespace std;

class Stracciatela {
private:
    string type;
    int price;
    float size;

public:
    Stracciatela();
    Stracciatela(string tp, int pr, float sz) : type(tp), price(pr), size(sz) {};

    string get_type();
    int get_price();
    float get_size();

    void set_type();
    void set_price();
    void set_size();
};

string Stracciatela::get_type() {
    return type;
}
int Stracciatela::get_price() {
    return price;
}
float Stracciatela::get_size() {
    return size;
}

void Stracciatela::set_type() {
    cout << "Choose type (Cone | Cup): ";
    cin >> type;
}
void Stracciatela::set_price() {
    cout << "Set price: ";
    cin >> price;
}
void Stracciatela::set_size() {  
    cout << "Set size in grams: ";
    cin >> size;
}

// Default constructor
Stracciatela::Stracciatela() : type(""), price(0), size(0.0) {}
