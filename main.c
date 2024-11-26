//
// Created by navia on 26-Nov-24.
//
#include <stdio.h>
#include "stdlib/stdlibh.h"
#include "string/stringh.h"
#include "stdio/stdioh.h"
int main() {
    printf("STDLIBH: NUMEROS\n");
    //numero absoluto y numbero, usando abs() de stdlib.h
    numAbs(-10);
    numAbs(5);
    numAbs(-15);
    //numero aleatorio, usando rand() de stdlib.h
    printf("STDLIBH: TIEMPO\n");
    tiempo();
    //comparar cadenas, usando stringComp() de stringh.h
    printf("STRING: COMPARA CADENAS\n");
    stringComp("Hola", "Mundo");
    stringComp("Prueba", "Prueba");
    //longitud de cadena, usando stringlen() de stringh.h
    printf("STRING: LONGITUD DE CADENA\n");
    stringlen("Hola Mundo");
    //abrir archivo, y escribir usando fprintf, archivoFopen() de stdioh.h
    printf("STDIOH: ABRIR ARCHIVO\n");
    archivoFopen();
    //leer archivo  y escribir, fscanf, archEscribirLeer() de stdioh.h
    printf("STDIOH: ESCRIBIR Y LEER ARCHIVO\n");
    archEscribirLeer();
    return 0;
}