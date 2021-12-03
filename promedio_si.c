#include <stdio.h>

void Promedio(){
int i,calif;
printf("cuantas calificaciones quieres promediar?\n");
scanf("%i",&calif);
system("PAUSE");//pausa la accion
system("cls");//limpia pantalla

float sumas,promedio;
float sumar[calif];
for(i=0;i<calif;i++){

printf("Dame el valor de la materia # %i ",i+1);
scanf("%f",&sumar[i]);
     sumas+=sumar[i];


}
promedio=sumas/calif;
printf("\nEl promedio del alumno es de: \n\t%.3f\n", promedio);

}


void main(){
    Promedio();
    int op,salir=0,correc=1;
    while(correc==1){
  printf("Quieres sacar el promedio de otro alumno?\nSi--->1\nNo---->2\n\tELIGE UNA OPCION\n");//aqui quiere que este Promedio()
    scanf("\t%i",&op);

    switch (op){

case 1:
    salir=0;
    correc=0;
    system("PAUSE");//pausa la accion
    system("cls");//limpia pantalla
    return main();
    break;
case 2:
    salir=1;
    correc=0;
    break;
default:
    printf("Tu respuesta fue incorrecta,elige una opcion correcta\n");
    correc=1;
    system("PAUSE");//pausa la accion
    system("cls");//limpia pantalla
    }

    }

return 0;


}
