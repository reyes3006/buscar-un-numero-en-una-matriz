//programa funcion, calcular el cuadrado y la otra el cubo
//pedir numero de teclado y decirle que quiere hace, si elevarlo al cuadrado
#include <stdio.h>
#include <stdio.h>

/*int cuadrado(int x){

return(x*x);
}

int cubo(int y){

return (y*y*y);
}

void main(){
    int base,resultado;
    printf("Dame numero a elevar\n");
    scanf("%d",&base);
    int op;
    printf("A que exponente lo quieres elevar?\n1----->cuadrado\n2-----Cubo\n");
    scanf("%d",&op);
        switch (op){
    case 1:
    resultado=cuadrado(base);
    printf("El cuadrado de el numero %d es %d",base,resultado);
    break;
    case 2:
    resultado=cubo(base);
    printf("El cubo de el numero %d es %d",resultado);
    break;
    }
}*/

//tabla donde muestre  aspectos, RAIZ CUADRADA,RAIZCUBO.
//MUEESTRE DEL 1-10,MUESTRE  SU RAIZ CUADRADA,EL CUBO, RAIZ


#include <stdio.h>
#include <math.h>
int pot2(int num){
    return num*num;
}
int pot3(int num){
    return pot2(num)*num;
}
float rz(int num){
    return sqrt(num);
}

int main(int num){

printf("Cuantos numeros quieres imprimir?\n");
scanf("%i",&num);
int imp[num];
printf("Numero\tRaiz\tCuadrado\tCubo\n");
int i;
for(i=0;i<num;i++){

   printf("%i\t%f\t%i\t%i\n",i+1, rz(num), pot2(num),pot3(num));

}

}

/*#include <stdio.h>

int cuadrado(int valor){
    return valor * valor;
}

int cubo(int valor){
    return cuadrado(valor) * valor;
}

float raiz(int valor){
    return sqrt(valor);
}

void mostrarLineaDeResultados(int valor){
    printf("%d\t%0.3f\t%d\t\t%d\n", valor, raiz(valor), cuadrado(valor), cubo(valor));
} //%0.3f da 3 decimales

void mostrarTitulos(){
    printf("Numero\tRaiz\tCuadrado\tCubo\n");
}

void mostrarTabla(){
    mostrarTitulos();
    for(int i=1; i<=10; i++){

mostrarLineaDeResultados(i);
    }
}

int main(){
    mostrarTabla();
    return 0;
}*/













