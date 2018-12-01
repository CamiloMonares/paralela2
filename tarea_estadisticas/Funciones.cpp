/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <math.h>  



using namespace std;

float sumaTotal(){
    float total = 0;
    float numeroAux;
    string rutaEntrada = "/home/pipeworkout/Escritorio/notas.txt";
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
    string rutaEntrada = "/home/pipeworkout/Escritorio/notas.txt";
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

float modaFinal(){
    float matrizFrecuencia[8][10] = {0};
    float numeroAux;
    int aux = 0;
    float moda=0;
    string rutaEntrada = "/home/pipeworkout/Escritorio/notas.txt";
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
                int iAux = trunc(numeroAux);
                int jAux = round((numeroAux - iAux)*10) ;
                for(int i=0; i<8; i++){
                    for(int j=0; j<10; j++){
                        if((i == iAux) and (j == jAux)){
                            matrizFrecuencia[i][j] += 1;
                        }                      
                    }
                }
            }
        }
    archivo_entrada.close();
    
    for(int i=0; i<8; i++){
        for(int j=0; j<10; j++){
            if(matrizFrecuencia[i][j] >= aux){
                aux = matrizFrecuencia[i][j];
                moda = i+(j/10.0);
            }
        }
    }
    return moda;
}
