#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
int main (){
    int valorUser;
    int valorUser2;
    printf("introduzca un N. entero: ");
    scanf("%d" , &valorUser);
    printf("introduzca otro  N. entero: ");
    scanf("%d" , &valorUser2);
    int suma = valorUser+valorUser2;
    int resta = valorUser-valorUser2;
    int mult = valorUser*valorUser2;
    printf("El resultado de la resta es: %d", resta);
    printf("\nEl resultado de la multiplicacion es: %d", mult);
    printf("\nEl resultado de la suma es: %d", suma);
    printf("\n\tGracias");
    return 0;
}


