//
// Created by navia on 26-Nov-24.
//

#include "stringh.h"
#include <stdio.h>
#include <string.h>

void stringComp(char *str1, char *str2) {
    if (strcmp(str1, str2) == 0) {
        printf("Las cadenas son iguales\n");
    } else {
        printf("Las cadenas son diferentes\n");
    }
}
void stringlen(char *str3) {
    int length = strlen(str3);
    printf("La longitud de la cadena es: %d\n", length);
}
