#include<stdio.h>
#include<math.h>

int main(){

float pre1, pre2, can1, can2, val1, val2, porc1, porc2, porcf1, porcf2;
int art1, art2, u1, u2;


printf("Buen dia, por favor ingrese los datos del primer producto\n");

printf("Digite el precio: \n");
scanf("%f", &pre1);

printf("Digite el numero de articulos por paquete: \n");
scanf("%d", &art1);

printf("Digite la cantidad de producto que contiene: \n");
scanf("%f", &can1);

printf("Digite la unidad de medida del producto:\n1)Kg \n2)Gr \n");
scanf("%d", &u1);

printf("\n\n");

while(pre1==0 || art1==0 || can1==0 || u1<1 || u1>2){

 printf("Ingreso un dato invalido, por favor intentelo de nuevo \n");

printf("Digite el precio: \n");
scanf("%f", &pre1);

printf("Digite el numero de articulos por paquete: \n");
scanf("%d", &art1);

printf("Digite la cantidad de producto que contiene: \n");
scanf("%f", &can1);

printf("Digite la unidad de medida del producto:\n1)Kg \n2)Gr \n");
scanf("%d", &u1);

printf("\n\n");

}


printf("Ahora ingrese los datos del segundo producto\n");

printf("Digite el precio: \n");
scanf("%f", &pre2);

printf("Digite el numero de articulos por paquete: \n");
scanf("%d", &art2);

printf("Digite la cantidad de producto que contiene: \n");
scanf("%f", &can2);

printf("Digite la unidad de medida del producto:\n1)Kg \n2)Gr \n");
scanf("%d", &u2);

printf("\n\n");

while(pre2==0 || art2==0 || can2==0 || u2<1 || u2>2){

 printf("Ingreso un dato invalido, por favor intentelo de nuevo \n");

printf("Digite el precio: \n");
scanf("%f", &pre2);

printf("Digite el numero de articulos por paquete: \n");
scanf("%d", &art2);

printf("Digite la cantidad de producto que contiene: \n");
scanf("%f", &can2);

printf("Digite la unidad de medida del producto:\n1)Kg \n2)Gr \n");
scanf("%d", &u2);

printf("\n\n");

}

if(u1!=u2){

 if(u1==1){

 can1*=1000;

 }
 else{

 can2*=1000;

 }
}

val1=(pre1/art1)/can1;

val2=(pre2/art2)/can2;

porc1=(val1*100)/val2;

porc2=(val2*100)/val1;


if(porc1>100){

 porcf1=(100-porc1)*-1;

}


else{

 porcf1=(porc1-100)*-1;

}



if(porc2>100){

 porcf2=(100-porc2)*-1;

}


else{

 porcf2=(porc2-100)*-1;

}


printf("El precio por gramo del producto 1 es de: %f \n", val1);

printf("El precio por gramo del producto 2 es de: %f \n \n", val2);


if(porc1>100){

printf("El producto 1 es %f %% mas caro que el producto 2 \n", porcf1);

 printf("El producto 2 es %f %% mas barato que el producto 1 \n", porcf2);


}

else{

 printf("El producto 1 es %f %% mas barato que el producto 2 \n", porcf1);

 printf("El producto 2 es %f %% mas caro que el producto 1 \n", porcf2);


}



}
