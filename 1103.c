#include <math.h>
#include <stdio.h>

int main(){
    int art,cont=0;
    float total = 0;
    printf("Cuantos productos piensas comprar? ");
    scanf("%d", &art);
    for(cont=1; cont<=art; cont++){
            float pr=0;
        printf("Dame el articulo numero %d: ", cont);
        scanf("%f",&pr);
            total+=pr;
        }
    int op;
        printf( "\n   Cual es tu metodo de pago?" );

        printf( "\n   1.pagar con tarjeta" );
        printf( "\n   2. Pagar con efectivo " );
        printf( "\n\n   Elige una opcion (1-2): " );
        scanf( "%d", &op );

        switch ( op ){
            case 1:
                 printf( "\n usted pagara con tarjeta");
                    total*=.95;
                    printf( "\n   EL monto a pagar es $%f \n", total);
                    break;



            case 2: printf( "\n usted pagara con efectivo",163);
                    total*=1.1;
                    printf( "\n  El monto a pagar es $ %f \n",total);
                    break;
         }

}


//#include <stdio.h>
//
//int main(){
//    int articulos;
//    float total = 0;
//    int tipoPago=0;
//    int contador;
//
//    printf("Cuantos productos piensas comprar? ");
//    scanf("%d", &articulos);
//
//    for(contador=0; contador<articulos; contador++){
//      float precio;
//      printf("Dame el producto num %d sil vous plait: $", contador+1);
//      scanf("%f", &precio);
//
//      total += precio;
//    }
//
//    while(tipoPago != 1 && tipoPago != 2){
//        printf("Metodo de pago?: \n1)Efectivo\n2)Tarjeta ");
//        scanf("%d", &tipoPago);
//
//        if(tipoPago == 1 || tipoPago == 2){
//            if(tipoPago == 1){
//                total *= .95;
//            }
//            if(tipoPago == 2){
//                total *= 1.1;
//            }
//        } else {
//            printf("Favor de teclear un numero valido\n");
//        }
//    }
//    printf("El total a pagar es de: $%f\n", total);
//
//    return 0;
//}
//


