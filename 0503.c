#include <math.h>
#include <stdio.h>

int main()

{
    int x,op;

    do
    {
        printf( "\n   1.Pagar el 30 de descuento", 163 );
        printf( "\n   2. Pagar el 20/20 a meses sin intereses ", 163 );
        printf( "\n\n   Elige una opcion (1-2): ", 162 );

        scanf( "%d", &op );

        switch ( op )
        {
            case 1: printf( "\n ¿Cual es el precio? ", 163 );
                    scanf( "%d", &x );
                    int pr = 1;
                    pr = x * .30;
                    pr = x - pr;
                    printf( "\n   EL precio a pagar es $%d\n", pr);
                    break;

            case 2: printf( "\n ¿Cual es el precio? ", 163 );
                    scanf( "%d", &x );
                    int p = 1;
                    int mon = 1;
                    p = x / 20;
                    mon= x * .20;
                    printf( "\n  Usted pagara mensnsualmente: $%d ", p );
                    printf( "\n  Usted ha recibido $%d puntos en su monedero\n", mon );
                    break;
         }
 printf( "\n  Gracias, vuelva pronto\n" );
 printf( "\n  liverpool es parte de tu vida\n" );
    } while ( op != 2 );

    return 0;
}


//#include<stdio.h>
//#include<math.h>
//int main(){
//int pr1=0, pr2=0, pr3=0, prt=0;
//
//printf("Por favor, introduzca el primer precio : ");
//scanf("%d", &pr1);
//printf("Por favor, introduzca el segundo precio : ");
//scanf("%d", &pr2);
//printf("Por favor, introduzca el  tercer precio : ");
//scanf("%d", &pr3);
//
//if(pr1==pr2==pr3){
//    prt=pr1+pr2;
//    printf("El total de tu compra es: %d ", prt);
//    return 0;
//}
//if(pr1<pr2 && pr1<pr3){
//    prt=pr2+pr3;
//    printf("El total de tu compra es: %d ", prt);
//    return 0;
//}
//if(pr2<pr1 && pr2<pr3){
//    prt=pr1+pr3;
//    printf("El total de tu compra es: %d ", prt);
//     return 0;
//}else{
//  prt=pr1+pr2;
//    printf("El total de tu compra es: %d ", prt);
//  return 0;
//
//}
//}
//#include <stdio.h>
//
//int main(){
//    int nuevoPrecio, medioCaro, masCaro, total;
//    printf("Buenos dias, favor de introducir el primer precio ");
//    scanf("%d", &nuevoPrecio);
//
//    masCaro = nuevoPrecio;
//
//    printf("Favor de introducir el segundo precio ");
//    scanf("%d", &nuevoPrecio);
//
//    if(nuevoPrecio < masCaro){
//        medioCaro = nuevoPrecio;
//    } else {
//        medioCaro = masCaro;
//        masCaro = nuevoPrecio;
//    }
//printf("Favor de introducir el tercer precio ");
//    scanf("%d", &nuevoPrecio);
//
//    if(nuevoPrecio > medioCaro){
//        if(nuevoPrecio < masCaro){
//            medioCaro = nuevoPrecio;
//        } else {
//            medioCaro = masCaro;
//            masCaro = nuevoPrecio;
//        }
//    }
//
//    total = medioCaro + masCaro;
//
//    printf("El total a pagar es de $%d", total);
//
//    return 0;
//}
