/*#include <stdio.h>
int main(){

int base;
for(base=1;base<=5;base++){
    printf("El cubo del numero %d es %d\n",base,cubo(base));
}
return 0;
}
int cubo(int base){
    int potencia;
potencia=base*base*base;
return potencia;

}*/

/*#include <stdio.h>
float iva(float final);
int main(){
    float final;
printf("el valor del producto es %f",iva(final));
return 0;
}
float iva(float final){
float precio=30;
float iva=.16;
float operacion=precio*iva;
final=precio+operacion;
return final;

}*/

/*#include <stdio.h>
float iva(float final);
float desc(finalcd);
int main(){
    float final;
    float finalcd;
printf("el valor del producto es %f %f",iva(final),desc(finalcd));
return 0;
}
float iva(float final){
float precio=30;
float iva=.16;
float operacion=precio*iva;
final=precio+operacion;
return final;
        float desc(float finalcd){
        float precio=final;
        float desc=.85;
        float operacion=precio*desc;
        final=precio-operacion;
        return finalcd;

}
}*/


/*#include <stdio.h>

float Suma();
float Area();

float Suma(){

float Bm, BM;

printf("Dame el valor de la base menor: ");
scanf("%f",& Bm);

printf("Dame el valor de la base mayor: ");
scanf("%f",& BM);

return (Bm+BM);
}


float Area(){

float h;

printf("Dame el valor de la altura: ");
scanf("%f",& h);

return Suma()*h/2;

}


void main(){

printf("El area del trapecio es: %f", Area());

}*/

#include <stdio.h>


float Suma();

int i,materias;
float Suma(){
printf("cuantas materias quieres promediar?\n");
scanf("%i",&materias);
system("PAUSE");
system("cls");

float sumas,promedio;
float sumar[materias];
for(i=0;i<materias;i++){

printf("Dame el valor de la materia # %i ",i+1);
scanf("%f",&sumar[i]);
     sumas+=sumar[i]/materias;

}
promedio=sumas;
return promedio;
}

void main(){
    printf("\nEl promedio del alumno es de: \n\t%.3f\n", Suma());
    int op,salir=0;
    printf("Quieres sacar el promedio de otro alumno?\nSi--->1\nNo---->2\n\tELIGE UNA OPCION\n");
    scanf("\t%i",&op);

    switch (op){

case 1:
    salir=0;
    system("PAUSE");
    system("cls");
    break;
case 2:
    salir=1;
    return 0;
default:
    printf("Tu respuesta fue incorrecta");

    }

return main();
}
















