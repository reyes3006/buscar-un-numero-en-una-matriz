//EUF que me diga la promocion que quiere el cliente
//(, , ,  )


//1.3x2

//#include <stdio.h>
//#include <math.h>
//int main(){
//    int pr1=0, pr2=0, pr3=0, prt=0;
//
//    printf("Por favor, introduzca el primer precio : ");
//    scanf("%d", &pr1);
//    printf("Por favor, introduzca el segundo precio : ");
//    scanf("%d", &pr2);
//    printf("Por favor, introduzca el  tercer precio : ");
//    scanf("%d", &pr3);
//
//    if(pr1==pr2==pr3){
//        prt=pr1+pr2;
//        printf("El total de tu compra es: %d ", prt);
//        return 0;
//    }
//    if(pr1<pr2 && pr1<pr3){
//        prt=pr2+pr3;
//        printf("El total de tu compra es: %d ", prt);
//        return 0;
//    }
//    if(pr2<pr1 && pr2<pr3){
//        prt=pr1+pr3;
//        printf("El total de tu compra es: %d ", prt);
//         return 0;
//    }
//    else{
//      prt=pr1+pr2;
//        printf("El total de tu compra es: %d ", prt);
//      return 0;
//
//    }
//}


////2.20%+30%
//#include <stdio.h>
//float main () {
// te descuenta el 20% y despues el 30%
//    float precio, mult=0, mult1=0, result=0;
//    float porcentaje=0.2, porcentaje1=0.3;
//    printf("Introduzca el precio");
//    scanf("%f", &precio);
//    mult=precio-precio*porcentaje;
//    mult1= mult-mult*porcentaje1;
//    result+=mult1;
//    printf("El precio final es: %f", result);
//}



//3.30% ó 20%Y20MSI
//#include <math.h>
//#include <stdio.h>
//
//int main()
//
//{
//    int x,op;
//
//        printf( "\n   1.Pagar el 30 de descuento", 163 );
//        printf( "\n   2. Pagar el 20/20 a meses sin intereses ", 163 );
//        printf( "\n\n   Elige una opcion (1-2): ", 162 );
//
//        scanf( "%d", &op );
//
//        switch ( op )
//        {
//            case 1: printf( "\n ¿Cual es el precio? ", 163 );
//                    scanf( "%d", &x );
//                    int pr = 1;
//                    pr = x * .30;
//                    pr = x - pr;
//                    printf( "\n   EL precio a pagar es $%d\n", pr);
//                    break;
//
//            case 2: printf( "\n ¿Cual es el precio? ", 163 );
//                    scanf( "%d", &x );
//                    int p = 1;
//                    int mon = 1;
//                    p = x / 20;
//                    mon= x * .20;
//                    printf( "\n  Usted pagara mensnsualmente: $%d ", p );
//                    printf( "\n  Usted ha recibido $%d puntos en su monedero\n", mon );
//                    break;
//         }
// printf( "\n  Gracias, vuelva pronto\n" );
// printf( "\n  liverpool es parte de tu vida\n" );
//
//
//    return 0;
//}

////4.Compra 1 y el 2do a mitad de precio
//#include <stdio.h>
//#include <math.h>
//int main () {
//    // si compras un par de tenis el segundo te sale a mitad de precio
//    float porcentaje=0.5;
//    int precio=0, precio1=0, total=0;
//    printf("Buenos dias favor de introducir el primer precio ");
//    scanf("%d", &precio);
//    printf("Introducir el segundo precio ");
//    scanf("%d", &precio1);
//    if (precio>precio1){
//        total=(precio1*porcentaje)+precio;
//    }
//        else{
//        total=(precio*porcentaje)+precio1;
//    }
//    printf("El total de la compra es: %d", total);
//    return 0;
//}

////5.preguntar si va a pagar con tarjeta(1.10) o con efectivo(.95)
//#include <math.h>
//#include <stdio.h>
//
//int main(){
//    int art,cont=0;
//    float total = 0;
//    printf("Cuantos productos piensas comprar? ");
//    scanf("%d", &art);
//    for(cont=1; cont<=art; cont++){
//            float pr=0;
//        printf("Dame el articulo numero %d: ", cont);
//        scanf("%f",&pr);
//            total+=pr;
//        }
//    int op;
//        printf( "\n   Cual es tu metodo de pago?" );
//
//        printf( "\n   1.pagar con tarjeta" );
//        printf( "\n   2. Pagar con efectivo " );
//        printf( "\n\n   Elige una opcion (1-2): " );
//        scanf( "%d", &op );
//
//        switch ( op ){
//            case 1:
//                 printf( "\n usted pagara con tarjeta");
//                    total*=.95;
//                    printf( "\n   EL monto a pagar es $%f \n", total);
//                    break;
//
//
//
//            case 2: printf( "\n usted pagara con efectivo",163);
//                    total*=1.1;
//                    printf( "\n  El monto a pagar es $ %f \n",total);
//                    break;
//         }
//
//}
