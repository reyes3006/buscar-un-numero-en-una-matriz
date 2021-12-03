
/*#include <stdio.h>


float Promedio();


void Promedio(){
int i,materias;
printf("cuantas materias quieres promediar?\n");
scanf("%i",&materias);
system("PAUSE");//pausa la accion
system("cls");//limpia pantalla

float sumas,promedio;
float sumar[materias];
for(i=0;i<materias;i++){

printf("Dame el valor de la materia # %i ",i+1);
scanf("%f",&sumar[i]);
     sumas+=sumar[i]/materias;

}
promedio=sumas;
printf("\nEl promedio del alumno es de: \n\t%.3f\n", Promedio());
/*return promedio;*/
//return main();
//
//}*//

/*void main(){
   return Promedio();
    int op,salir=0,correc=1;
    while(correc==1){
    printf("Quieres sacar el promedio de otro alumno?\nSi--->1\nNo---->2\n\tELIGE UNA OPCION\n");
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
    return 0;
default:
    printf("Tu respuesta fue incorrecta,elige una opcion correcta\n");
    correc=1;
    system("PAUSE");//pausa la accion
    system("cls");//limpia pantalla
    }

    }


}*/
#include <stdio.h>

float Promedio();

int main(){


    int op;
    Promedio();
printf("\nDesea calcular otro promedio? \n1)Si \n2)No \n");
scanf("%i",& op);

while(op==1){
Promedio();
printf("\nDesea calcular otro promedio? \n1)Si \n2)No \n");
scanf("%i",& op);

}
}

float Promedio(){

int ncal, c;
float cal, suma, o;

printf("Cuantas calificaciones desea promediar? ");
scanf("%i",& ncal);
float sumar[ncal];

for(c=0;c<ncal;c++){

 printf("Dame la calificacion %i:", c+1);
    scanf("%f",&sumar[c]);
    suma+=sumar[c]/ncal;
}
printf("El promedio del alumno es: %.2f", suma);//.2f se usa para concatenar solo 2 decimales del float
}
















