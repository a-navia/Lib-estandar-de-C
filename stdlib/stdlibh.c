//
// Created by navia on 26-Nov-24.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stdlibh.h"

void numAbs(int num) {
    int abs_num = abs(num);
    printf("El valor del numero es %d\n", num);
    printf("El valor absolute del numero es %d\n", abs_num);
}
void tiempo() {
    srand(time(NULL));
    int random_number = rand();
    printf("Numero aleatorio %d\n", random_number);
}
