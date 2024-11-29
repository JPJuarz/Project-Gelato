// Gelato.h

/* Project_Gelato
 * Juan Pablo Juárez Ortiz
 * A01708685
 * 28 / 11 / 2024
 */

/* La clase de Gelato es la clase principal o la clase papa que será la que le
 heredara sus funciones y sus metodos declarados en la parte debajo a sus tres clases
 hijas. (Stracciatela, Hazelnut, Vanilla)
 */

// Bibliotecas y protección para el codigo
#ifndef GELATO_H
#define GELATO_H
#include <iostream>
#include <string>
// Archivo usado
#include "Topping.h"
using namespace std;

// Declaración de la clase Gelato (clase a dar sus datos públicos a otras)
class Gelato {
    
// Declaración de las variables |privadas| usadas dentro de la clase
protected:
    string type;
    int price;
    float size;
    // Composición de la clase de topping
    Topping topping;

// Declaración de lo que será público
public:
    // Creación de los constructores
    // Constructor default
    Gelato() : type(""), price(0), size(0.0), topping() {};
    // Constructor que recibe y regresa valores
    // Recibe valores de tipo, precio y tamaño
    Gelato(string tp, int pr, float sz) : type(tp), price(pr), size(sz) {};
    
    // Getter del tipo de helado
    string get_type() {
        return type;
    }
    
    // Getter del precio del helado
    int get_price() {
        return price;
    }
    
    // Getter del tamaño del helado
    float get_size() {
        return size;
    }

    // Setter del tipo de helado (consiguen los valores necesitados)
    void set_type() {
        cout << "Choose type (Cone | Cup): ";
        cin >> type;
    }
    
    // Setter del precio del helado
    void set_price() {
        cout << "Set price: ";
        cin >> price;
    }
    
    // Setter del tamaño del helado
    void set_size() {
        cout << "Set size in grams: ";
        cin >> size;
    }
    
    // Llamada de la función que crea el topping que va a tener el helado
    void crea_topping(string, float, float);
    
    // Getter del topping
    Topping get_topping() {
        return topping;
    }

    float calculate_calories() {
        return size * 0.4;
    }
};

// Función que crea el topping deseado con datos de entrada
// Recibe datos de nombre, calorias y precio
void Gelato::crea_topping(string n, float c, float p) {
    topping = Topping(n,c,p);
}

#endif
