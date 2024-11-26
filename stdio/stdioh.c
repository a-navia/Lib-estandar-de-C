#include "stdioh.h"
#include <stdio.h>

void archivoFopen() {
    //archivo 0 solo para abrir, mode r para leer
    FILE *archivo = fopen("archivo.txt", "r");
    //uso de if para verificar si se puede abrir el archivo
    if (archivo == NULL) {
        printf("No se puede abrir el archivo\n");
        return;
    }
    fclose(archivo);
}

void archEscribirLeer() {
    //archivo 1 para escribir y leer, mode w para escribir
    FILE *archivo1 = fopen("archivo1.txt", "w");
    //uso de if para verificar si se puede abrir el archivo
    if (archivo1 == NULL) {
        printf("No se puede abrir el archivo para escribir\n");
        return;
    }
    //fprintf para escribir en el archivo
    fprintf(archivo1, "Hola, Mundo! \n");
    fclose(archivo1);
//archivo 1 para leer, mode r para leer
    archivo1 = fopen("archivo1.txt", "r");
    if (archivo1 == NULL) {
        printf("No se puede abrir el archivo para leer\n");
        return;
    }
//buffer para leer del archivo
    char buffer[50]; //buffer de 50 caracteres, almacenara el contenido del archivo
    if (fscanf(archivo1, "%49[^\n]", buffer) == 1) { //al usar %s lee hasta el primer espacio, %49[^\n] lee hasta el salto de linea
        printf("Leido del archivo: %s\n", buffer);
    } else {
        printf("Error al leer del archivo\n"); //en caso de error
    }
    fclose(archivo1);
}