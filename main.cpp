// main.cpp

/* Project_Gelato
 * Juan Pablo Juárez Ortiz
 * A01708685
 * 28 / 11 / 2024
 */

/*
 Este proyecto es un proyecto hecho para la clase de Pensamiento
 Computacional Orientado a Objetos. Tiene el propósito de hacer un tipo
 menu donde el dueño / usuario pueda ajustar o hacer variaciones de cierta
 manera a helados para así poder modelar su heladería y ver como y con
 que formato es que se venden de mejor manera sus productos
 */

// Bibliotecas
#include <iostream>
#include <string>
// Archivos usados
#include "Stracciatela.h"
#include "Hazelnut.h"
#include "Vanilla.h"
#include "Topping.h"

// Función principal
int main() {
    
    // STRACCIATELA
    /* Pregunta al usuario los ajustes o datos que se le quieren poner a
    las diferentes variables del helado Stracciatela */
    Stracciatela iceCream1;
    iceCream1.set_type();
    iceCream1.set_price();
    iceCream1.set_size();
    
    // Topping Stracciatela
    // Crea el topping del helado Stracciatela (la clase compuesta que no existe sin el helado)
    iceCream1.crea_topping("Oreos", 20, 15);
    
    /* Consigue los datos puestos por el usuario y ya puestos (los del topping)
     y los usa para calcular un total de calorias con la varación del helado seleccionado.
     Imprime todos los detalles sobre el helado
     */
    cout << "\nStracciatela Details:" << endl;
    cout << "Type: " << iceCream1.get_type() << endl;
    cout << "Price: $" << iceCream1.get_price() << endl;
    cout << "Size: " << iceCream1.get_size() << " grams" << endl;
    cout << "Calories: " << iceCream1.calculate_calories() << " kcal" << endl;
    cout << "Topping: " << iceCream1.get_topping().get_name() << "\n" << endl;
    
    // HAZELNUT
    /* Pregunta al usuario los ajustes o datos que se le quieren poner a
    las diferentes variables del helado Hazelnut */
    Hazelnut iceCream2;
    iceCream2.set_type();
    iceCream2.set_price();
    iceCream2.set_size();
    
    // Topping Hazelnut
    // Crea el topping del helado Hazelnut
    iceCream2.crea_topping("Chocolate chips", 35, 40);

    /* Consigue los datos puestos por el usuario y ya puestos (los del topping)
     y los usa para calcular un total de calorias con la varación del helado seleccionado.
     Imprime todos los detalles sobre el helado */
    cout << "\nHazelnut Details:" << endl;
    cout << "Type: " << iceCream2.get_type() << endl;
    cout << "Price: $" << iceCream2.get_price() << endl;
    cout << "Size: " << iceCream2.get_size() << " grams" << endl;
    cout << "Calories: " << iceCream2.calculate_calories() << " kcal" << endl;
    cout << "Topping: " << iceCream2.get_topping().get_name() << "\n" << endl;
    
    // VANILLA
    /* Pregunta al usuario los ajustes o datos que se le quieren poner a
    las diferentes variables del helado Vainilla */
    Vanilla iceCream3;
    iceCream3.set_type();
    iceCream3.set_price();
    iceCream3.set_size();
    
    // Topping Vanilla
    // Crea el topping del helado Vainilla
    iceCream3.crea_topping("Sprinkles", 15, 10);

    /* Consigue los datos puestos por el usuario y ya puestos (los del topping)
     y los usa para calcular un total de calorias con la varación del helado seleccionado.
     Imprime todos los detalles sobre el helado*/
    cout << "\nVanilla Details:" << endl;
    cout << "Type: " << iceCream3.get_type() << endl;
    cout << "Price: $" << iceCream3.get_price() << endl;
    cout << "Size: " << iceCream3.get_size() << " grams" << endl;
    cout << "Calories: " << iceCream3.calculate_calories() << " kcal" << endl;
    cout << "Topping: " << iceCream3.get_topping().get_name() << "\n" << endl;
    
    // Suma los precios puestos por el usuario para conseguir un precio total
    // de lo que serían estos sabores en una sola cuenta
    cout << "Total Price: $" << iceCream1.get_price() + iceCream2.get_price() + iceCream3.get_price() << endl;
    
    return 0;
    }
