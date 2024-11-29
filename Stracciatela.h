//  Stracciatela.h

/* Project_Gelato
 * Juan Pablo Juárez Ortiz
 * A01708685
 * 28 / 11 / 2024
 */

/* La clase de Stracciatela es una de las clases que incluyen y estan formadas
 por herencia. Esta clase recibe las funciones de la clase de Gelato las cuales
 le permiten tener un nombre, precio y tamaño. Igualmente incluye un número
 especifico de calorías por los ingredientes usados para la creación del sabor
 y los calcula dependiendo del tamaño conseguido por input del usuario.
 */

// Bibliotecas y protección para el codigo
#ifndef STRACCIATELA_H
#define STRACCIATELA_H
#include <string>
#include <iostream>
// Archivo incluido
#include "Gelato.h"
using namespace std;

// Declaración de la clase Stracciatela y heredación de los aspectos públicos
// de la clase Gelato
class Stracciatela : public Gelato {
// Variable privada de número de calorías por gramaje
private:
    float cal = 0.7;
public:
    // Constructor con herencia
    Stracciatela() : Gelato("Stracciatela", 0, 0.0) {}
    // Función para conseguir el tipo de helado
    void set_type() {
        cout << "Choose type for Stracciatela (Cone | Cup): ";
        cin >> type;
    }
    // Función que calcula en número de calorías dependiendo de ambos el tamaño
    // y el valor de cal previamente determinado
    float calculate_calories() {
           return size * cal;
       }
};

#endif
