#include <stdio.h>
int main(){
int cont=0,nip=4502,n,corr=0;
int saldo=4500;

    printf("Inserta su tarjeta\n");

                while (cont<3&& corr==0){
                        printf("\ningresa tu NIP\n\n");

                            private:
                        scanf("%d",&n);

                        system("cls");
                                if(nip==n) {
                                        printf("tu NIP es correcto\n");
                                        corr=1;
                                }

                                else{
                                        cont++;
                                        printf("tu NIP es incorrecto,vas en el intento %d de 3\n",cont);
                                    }

                    }
                    if(corr==1){

                            while(corr==1){
                            int proc;
                                    system("cls");

                                    printf("\n\t     Menu de opciones\n");
                                    printf("\n1.Depositar a tu cuenta\n");
                                    printf("\n2.Retirar efectivo de tu cuenta\n");
                                    printf("\n3.Consultar tu saldo\n");
                                    printf("\n4.Enviar dinero\n");
                                    printf("\n5.Pagar un servicio\n");
                                    printf("\n6.Salir\n\n");
                                    scanf("\n%d",&proc);
                                    system("cls");
                                    switch(proc){

                                            case 1:{
                                                    int abono;
                                                        printf("Cuanto deseas abonar?\n");
                                                        scanf("\n%d",&abono);
                                                        saldo=abono+saldo;
                                                        printf("Usted acaba de  de abonar %d a su cuenta,su saldo es: %d\n",abono,saldo);
                                                    break;
                                                    }

                                            case 2:{
                                                    int retiro;
                                                        printf("\n\t     Su saldo actual es %d\n",saldo);
                                                        printf("Cual es la cantidad que desea retirar?\n");
                                                        scanf("\n%d",&retiro);

                                                    if(retiro>saldo){

                                                        printf("Lo sentimos, no cuenta con ese saldo %d\n",retiro);
                                                    }

                                                    else{
                                                        saldo-=retiro;
                                                        printf("Usted acaba de retirar %d de su cuenta, su saldo actual es %d\n",retiro,saldo);
                                                    }
                                                    break;
                                            }

                                            case 3:{
                                                    printf("Su saldo es de %d\n",saldo);
                                                    break;
                                            }
                                            case 4:{
                                                    int cuenta,cant;
                                                    printf("\n\t     Su saldo actual es %d\n",saldo);
                                                    printf("Ingrese el N. de cuenta/CLABE INTERBANCARIA/Tarjeta de debito\n");
                                                    scanf("\n%d",&cuenta);
                                                    printf("Cual es la cantidad que quiere enviar?\n");
                                                    scanf("\n%d",&cant);
                                                        if(cant>saldo){
                                                            printf("Lo sentimos, no cuenta con ese saldo %d\n",cant);
                                                        }
                                                        else{
                                                              saldo=saldo-cant;
                                                           printf("\nUsted acaba de enviar $ %d al la cuenta %d , su saldo es %d\n",cant,cuenta,saldo);
                                                        }
                                                    break;
                                            }
                                            case 5:{
                                                printf("\n\t         Su saldo actual es %d\n\n",saldo);
                                                int salir=0;
                                                while(salir==0){
                                                    int ser;
                                                    printf("\n\t     Elija el servicio que desea pagar\n\n");
                                                    printf("\n1.Pago de recibo de agua\n");
                                                    printf("\n2.Pago de recibo de luz\n");
                                                    printf("\n3.Pago de servicio de telefonia\n");
                                                    printf("\n4.Volver al menu anterior\n");
                                                    printf("\n5.Salir\n\n");
                                                    scanf("\n\n%d",&ser);
                                                    system("cls");

                                                            switch(ser) {
                                                               int nser,pago;

                                                                    case 1:{
                                                                            printf("Ingresa el N.de servicio\n");
                                                                            scanf("v%d",&nser);
                                                                            printf("Cual es el monto a pagar?\n");
                                                                            scanf("%d",&pago);
                                                                             if(pago>saldo){
                                                                            system("cls");
                                                                            printf("Lo sentimos, no cuenta con ese saldo %d\n",pago);
                                                                            }

                                                                            else{
                                                                            saldo-=pago;
                                                                            system("cls");
                                                                            printf("\nUsted pago el servicio de $ %d con N. de servicio %d , su saldo actual es de %d\n",pago,nser,saldo);

                                                                            }


                                                                            break;
                                                                    }

                                                                    case 2:{
                                                                            printf("Ingresa el N.de servicio\n");
                                                                            scanf("\n%d",&nser);
                                                                            printf("\nCual es el monto de pago?\n");
                                                                            scanf("\n%d",&pago);

                                                                            if(pago>saldo){
                                                                            system("cls");
                                                                                printf("\nLo sentimos, no cuenta con ese saldo %d\n",pago);
                                                                            }

                                                                            else{
                                                                            saldo-=pago;
                                                                            system("cls");
                                                                            printf("\nUsted pago el servicio de $ %d con N. de servicio %d , su saldo actual es de %d\n",pago,nser,saldo);

                                                                            }

                                                                            break;
                                                                    }

                                                                    case 3:{
                                                                            printf("Ingresa el N.de servicio\n");
                                                                            scanf("\n%d",&nser);
                                                                            printf("Cual es el monto de pago?\n");

                                                                            scanf("%d",&pago);
                                                                            if(pago>saldo){
                                                                            system("cls");
                                                                                printf("Lo sentimos, no cuenta con ese saldo %d\n",pago);
                                                                            }

                                                                            else{
                                                                            saldo-=pago;
                                                                            system("cls");
                                                                            printf("\nUsted pago el servicio de $ %d con N. de servicio %d , su saldo actual es de %d\n",pago,nser,saldo);

                                                                            }

                                                                            break;
                                                                    }

                                                                    case 4 :{
                                                                        printf("Usted esta volviendo al menu anterior\n");
                                                                        salir=1;
                                                                        break;
                                                                    }
                                                                    case 5:{
                                                                    printf("Gracias por su eleccion, vuelva pronto\n");
                                                                    return 0;
                                                                    }

                                                                    default:{
                                                                        printf("Elige una opcion valida\n");
                                                                    }
                                                            }
                                                         system("PAUSE");
                                                        system("cls");
                                                        }
                                                        break;

                                                    }

                                            case 6:{
                                                    printf("Gracias por su eleccion, vuelva pronto\n");
                                                    return 0;

                                                    break;
                                                    }
                                            default:{
                                                    printf("Elige una opcion valida\n");
                                            }
                                    }
                                system("PAUSE");
                                system("cls");
                        }

                    }
                    else{
                      printf("Su tarjeta se bloqueo por que excedio el numero de intentos (%d) ,favor de acudir al modulo de atencion a clientes",cont);
                    }
    return 0;
}
