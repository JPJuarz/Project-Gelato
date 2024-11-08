//  Vanilla.h
//  Project_Gelato

#include <string>
#include <iostream>
using namespace std;

class Vanilla {
private:
    string type3;
    int price3;
    float size3;

public:
    Vanilla();
    Vanilla(string tp, int pr, float sz) : type3(tp), price3(pr), size3(sz) {};

    string get_type3();
    int get_price3();
    float get_size3();

    void set_type3();
    void set_price3();
    void set_size3();
};

string Vanilla::get_type3() {
    return type3;
}
int Vanilla::get_price3() {
    return price3;
}
float Vanilla::get_size3() {
    return size3;
}

void Vanilla::set_type3() {
    cout << "Choose type (Cone | Cup): ";
    cin >> type3;
}
void Vanilla::set_price3() {
    cout << "Set price: ";
    cin >> price3;
}
void Vanilla::set_size3() {
    cout << "Set size in grams: ";
    cin >> size3;
}

// Default constructor
Vanilla::Vanilla() : type3(""), price3(0), size3(0.0) {}

