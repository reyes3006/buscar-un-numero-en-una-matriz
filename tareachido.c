#include <math.h>
#include <stdio.h>
//
//EUF que me diga la promocion que quiere el cliente
//(3x2, 20%+30%, 30% ó 20%Y20MSI, Compra 1 y el 2do a mitad de precio )
//preguntar si va a pagar con tarjeta(1.10) o con efectivo(.95)
int main(){
int promo;
        printf( "\n   Cual la promocion deseas elegir?\n" );
        printf( "\n   1. 3x2 (solo aplica en la compra de 3 articulos)\n" );
        printf( "\n   2. 20%+30% de descuento\n" );
        printf( "\n   3. 30% ó 20%Y20MSI \n" );
        printf( "\n   4. Compra 1 y el 2do a mitad de precio (solo aplica  en la compra de 2 articulos)\n" );
        printf( "\n   5. Pago con tarjeta o efecfectivo \n" );

         scanf( "%d ", &promo );

           switch ( promo ){

//                case 1:
//                        int pr1=0, pr2=0, pr3=0, prt=0;
//
//                        printf("Por favor, introduzca el primer precio : ");
//                        scanf("%d", &pr1);
//                        printf("Por favor, introduzca el segundo precio : ");
//                        scanf("%d", &pr2);
//                        printf("Por favor, introduzca el  tercer precio : ");
//                        scanf("%d", &pr3);
//
//                        if(pr1==pr2==pr3){
//                            prt=pr1+pr2;
//                            printf("El total de tu compra es: %d ", prt);
//                            return 0;
//                        }
//                        if(pr1<pr2 && pr1<pr3){
//                            prt=pr2+pr3;
//                            printf("El total de tu compra es: %d ", prt);
//                            return 0;
//                        }
//                        if(pr2<pr1 && pr2<pr3){
//                            prt=pr1+pr3;
//                            printf("El total de tu compra es: %d ", prt);
//                             return 0;
//                        }else{
//                          prt=pr1+pr2;
//                            printf("El total de tu compra es: %d ", prt);
//                          return 0;
//
//                        }
//
//


                case 2:

                            float precio, mult=0, mult1=0, result=0;
                            float porcentaje=0.2, porcentaje1=0.3;
                            printf("Introduzca el precio");
                            scanf("%f", &precio);
                            mult=precio-precio*porcentaje;
                            mult1= mult-mult*porcentaje1;
                            result+=mult1;
                            printf("El precio final es: %f", result);
                        }


                case 3:
                    int x,op;
                        printf( "\n   1.Pagar el 30 de descuento" );
                        printf( "\n   2. Pagar el 20/20 a meses sin intereses " );
                        printf( "\n\n   Elige una opcion (1-2): ");

                        scanf( "%d", &op );

                            switch ( op ){
                                case 1: printf( "\n ¿Cual es el precio? " );
                                    scanf( "%d", &x );
                                    int pr = 1;
                                    pr = x * .30;
                                    pr = x - pr;
                                    printf( "\n   EL precio a pagar es $%d\n", pr);
                                    break;

//                                case 2: printf( "\n ¿Cual es el precio? ", 163 );
//                                        scanf( "%d", &x );
//                                        int p = 1;
//                                        int mon = 1;
//                                        p = x / 20;
//                                        mon= x * .20;
//                                        printf( "\n  Usted pagara mensnsualmente: $%d ", p );
//                                        printf( "\n  Usted ha recibido $%d puntos en su monedero\n", mon );
//                                        break;
//                             }
//
//
//
//                case 4:
//                            float porcentaje=0.5;
//                            int precio=0, precio1=0, total=0;
//                            printf("Buenos dias favor de introducir el primer precio ");
//                            scanf("%d", &precio);
//                            printf("Introducir el segundo precio ");
//                            scanf("%d", &precio1);
//                            if (precio>precio1){
//                                total=(precio1*porcentaje)+precio;
//                            }
//                                else{
//                                total=(precio*porcentaje)+precio1;
//                            }
//                            printf("El total de la compra es: %d", total);
//                            return 0;
//                        }
//
//
//                case 5:
//                            int op;
//
//                            printf( "\n   Cual es tu metodo de pago?" )
//                            printf( "\n   1.pagar con tarjeta");
//                            printf( "\n   2. Pagar con efectivo ");
//                            printf( "\n\n   Elige una opcion (1-2): " );
//                            scanf( "%d", &op );
//
//                            switch ( op ){
//                                case 1: printf( "\n usted pagara con tarjeta");
//                                        total*=.95;
//                                        printf( "\n   EL monto a pagar es $%f \n", total);
//                                        break;
//                                        printf( "\n   EL monto a pagar es $%f \n", total);
//
//
//                                case 2: printf( "\n usted pagara con efectivo",163);
//                                        total*=1.1;
//                                        printf( "\n  El monto a pagar es $ %f \n",total);
//                                        break;
//                                    }
//
//}
//            }
           }


}
