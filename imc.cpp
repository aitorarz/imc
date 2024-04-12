#include <iostream>

using namespace std;

/*
    [] declaramos las variables "peso" y "altura"
    [] inicializamos las variables previas al pedirle al usuario que les de un valor (peso en kg y altura en m)
    [] declaramos e inicializamos la variable "imc" como el producto entre "peso" y "altura" al cuadrado
    [] mostramos en pantalla distintas respuestas dependiendo del valor de imc  (< 18, > 18 and < 25, > 25)
*/

int main() {

    float peso;
    float altura;

    cout << "ingrese su peso: ";
    cin >> peso;

    cout << "ingrese su altura: ";
    cin >> altura;

    float imc = (peso / (altura * altura));

    if (imc < 18) {
        cout << "tenes bajo peso";
    }

    else if (imc > 25) {
        cout << "tenes sobrepeso";
    }

    else {
        cout << "tenes un peso saludable";
    }

    return 0;
}
