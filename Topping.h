//  Topping.h

/* Project_Gelato
 * Juan Pablo Juárez Ortiz
 * A01708685
 * 28 / 11 / 2024
 */

/* La clase de Topping es la clase que incluye composición. Esta es una clase
 que no puede existir si no existe la clase de Gelato o si la llegan a borrar.
 Esta regresa el nombre del topping añadido al helado
 */

// Bibliotecas y protección para el codigo
#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>
#include <string>
using namespace std;

// Declaración de la clase
class Topping {
// Declaraciónd de las variables privadas de la clase
private:
    string name;
    float calories;
    float price;

// Declaración de los constructores y de las funciónes publicas
public:
    // Constructor default de la clase
    Topping() : name(""), calories(0.0), price(0.0) {};
    // Constructor que recibe y regresa datos
    Topping(string n, float c, float p) : name(n), calories(c), price(p) {};
    
    // Getter del nombre del topping
    string get_name() {
        return name;
    }
    // Setter del nombre del topping
    void set_name(string n) {
        name = n;
    }
    
    // Getter de las calorías del topping
    float get_calories() {
        return calories;
    }
    // Setter de las calorías del topping
    void set_calories(float c) {
        calories = c;
    }
    
    // Getter del precio del topping
    float get_price() {
        return price;
    }
    // Setter del precio del topping
    void set_price(float p) {
        price = p;
    }
};

#endif
