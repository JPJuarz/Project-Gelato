//  Hazelnut.h

/* Project_Gelato
 * Juan Pablo Juárez Ortiz
 * A01708685
 * 28 / 11 / 2024
 */

/* La clase de Hazelnut es una de las clases que incluyen y estan formadas
 por herencia. Esta clase recibe las funciones de la clase de Gelato las cuales
 le dan un nombre, precio y tamaño. Igualmente incluye un número especifico de calorías
 por los ingredientes usados para la creación del sabor y los calcula dependiendo del
 tamaño conseguido por input del usuario.
 */

// Bibliotecas y protección para el codigo
#ifndef HAZELNUT_H
#define HAZELNUT_H
#include <string>
#include <iostream>
// Archivo incluido
#include "Gelato.h"
using namespace std;

// Declaración de la clase Hazelnut y heredación
class Hazelnut : public Gelato {
// Variable privada (número de calorías por gramaje)
private:
    float cal = 0.9;
// Funciones públicas
public:
    // Constructor con herencia de la clase Gelato
    Hazelnut() : Gelato("Hazelnut", 0, 0.0) {}
    // Función para conseguir el tipo de helado
    void set_type() {
        cout << "Choose type for Hazelnut (Cone | Cup | Bar): ";
        cin >> type;
    }
    /* Función que calcula en número de calorías dependiendo del tamaño
    y el valor de cal previamente determinado */
    float calculate_calories() {
           return size * cal;
       }
};

#endif
