#include <cstdlib>
#include <fstream>
#include <iostream>
#include "Funciones.h"


using namespace std;

/*
- Suma total.
- Cantidad de elementos.
- Media
- Mediana
- Moda
- Desviación estándar.
 */

int main(int argc, char** argv) {
    
    float total=0, cantidad=0, media, mediana, moda, desviacionE;
    
    total = sumaTotal();
    cantidad = cantidadTotal();
    media = total/cantidad;
    cout<<"la suma total es: "<<total<<endl;
    cout<<"La cantidad de notas es: "<<cantidad<<endl;
    cout<<"La media de notas es: "<<media<<endl;
    return 0;
}

