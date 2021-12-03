#include <math.h>
#include <stdio.h>

int main(){
    int promo;
        printf( "\n   Cual la promocion deseas elegir?\n" );
        printf( "\n   1. 3x2 (solo aplica en la compra de 3 articulos)\n" );
        printf( "\n   2. 20%+30% de descuento\n" );
        printf( "\n   3. 30% ó 20%Y20MSI \n" );
        printf( "\n   4. Compra 1 y el 2do a mitad de precio (solo aplica  en la compra de 2 articulos)\n" );
        printf( "\n   5. Pago con tarjeta o efecfectivo \n" );

         scanf( "%d ", &promo );

    int art,tp=0,cont=0;
    float total = 0,pr=0;

    printf("Cuantos productos piensas comprar? ");
    scanf("%d", &art);


        for(cont=1; cont<=art; cont++){

          printf("Dame el articulo numero %d: ", cont);
        scanf("%f",&pr);
            total+=pr;
        }
    int op;

        printf( "\n   Cual es tu mjetodo de pago?" );

        printf( "\n   1.pagar con tarjeta" );
        printf( "\n   2. Pagar con efectivo " );
        printf( "\n\n   Elige una opcion (1-2): ");

        scanf( "%d", &op );

        switch ( op ){
            case 1: printf( "\n usted pagara con tarjeta");
                    total*=.95;
                    printf( "\n   EL monto gar es $%f \n", total);
                    break;



            case 2: printf( "\n usted pagara con efectivo",163);
                    total*1.1;
                    printf( "\n  El monto a pagart es $ %f \n",total);
                    break;
            default:
                printf("Vuelve a elegir un numero");
         }


}



