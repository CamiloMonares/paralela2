/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <algorithm>



using namespace std;

float sumaTotal(){
    float total = 0;
    float numeroAux;
    string rutaEntrada = "/home/pipeworkout/Escritorio/numeros.txt";
    string linea;
    
    ifstream archivo_entrada;

    archivo_entrada.open(rutaEntrada, ios::in); //abriendo archivo modo lectura
    if(archivo_entrada.fail()){
            //si no se puede abrir el archivo o crear se termina el programa
            cout<<"Error con los archivos!"<<endl;
        }
        else{            
            while(!archivo_entrada.eof()){ //recorre archivo txt
                getline(archivo_entrada, linea); //guardando linea del txt en linea
                replace(linea.begin(), linea.end(), ',' , '.');
                numeroAux = atof(linea.c_str());
                total += numeroAux;
            }
        }
    archivo_entrada.close();
    return total;
}

int cantidadTotal(){
    int cantidad = 0;
    string rutaEntrada = "/home/pipeworkout/Escritorio/numeros.txt";
    string linea;
    
    ifstream archivo_entrada;

    archivo_entrada.open(rutaEntrada, ios::in); //abriendo archivo modo lectura
    if(archivo_entrada.fail()){
            //si no se puede abrir el archivo o crear se termina el programa
            cout<<"Error con los archivos!"<<endl;
        }
        else{            
            while(!archivo_entrada.eof()){ //recorre archivo txt
                getline(archivo_entrada, linea); //guardando linea del txt en linea
                cantidad++;
            }
        }
    archivo_entrada.close();
    return cantidad-1;
}
