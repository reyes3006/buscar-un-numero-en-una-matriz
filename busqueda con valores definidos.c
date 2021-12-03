#include <stdio.h>
int main(){

        int x[8]={10,20,30,40,50,60,70,80};


        int i; //contador


        int band2=4;//para salirnos de el ciclo
        while(band2==4){//compara la band para slirnos del ciclo
         printf("El vector quedo de la siguiente manera\n ");
                printf("\n");

                    for(i=0;i<8;i++){ //nos imprime el vector

                            printf("\t");
                            printf("%i",x[i]);
                            printf("\t ");



                }
        printf("\n");


       int buscar;


        printf("Ingrese el numero que desea buscar: \n");
        scanf("%i",&buscar);

        //inicializamos las variables
        int primero=0;//este vale 0 por la primer posicion

        int segundo=8;//este vale x por el numero maximo de elementos

        int mitad;//funciona como contador
        int bandera =0;


        while(primero<=segundo){//esto para que los apuntadores coincidan en la posicion

            mitad=((primero+segundo)/2);//aqui sacamos la mitad del vector


            //valor buscado
            if(x[mitad]==buscar){//vector se debe dirigir a el valor en mitad y lo compara con buscar
                                    //la posicion indicada por mitad y lo compara para ver si es igual a buscar
                bandera =1;
                band2=5;


                break;//nos saca del bucle
            }

            //todo este ciclo lo hara hasta que llegue a if(vector[mitad]==buscar), ira partiendo el vector
            //por mitad por mitad  hasta encontrar el valor,por las instrucciones dadas eligira si usa la primer o segunda parte

            //valor de Apuntador 1
            if(x[mitad]<buscar){//aqui, hace la comparacion para que lado irse, si el mayor o menor
                primero=mitad+1;//el nuevo subvector
                mitad=((primero+segundo)/2);



            }

            if(x[mitad]>buscar){//aqui, hace la comparacion para que lado irse, si el mayor o menor
                segundo=mitad-1;
                mitad=((primero+segundo)/2);//el nuevo subvector


            }
            //valor de Apuntador 2


        }
        int op;
        if(bandera==1&& band2==5){//bandera1 sirve para saber que el dato fue encontrado, band2 sirve para preguntar si queremos continuar o no

                printf("Numero  encontrado en la posicion %i\n",mitad+1);//aqui sabemos que el numero
                                                                        //si sta, hacemos otra itineracion por si queremos seguir buscando

                printf("\nQuieres seguir buscando un numero\nSI--->1\nNo--->2\n");//pregunta para seguir buscando
                scanf("%i",&op);

            switch(op){//aqui un switch para elegir si seguir buscando o no
            case 1:
                band2=4;
                printf("Por favor vuelve a ingresar un numero y calcularemos si existe\n");

                printf("\n");
                system("pause");
                system("cls");
                break;
            case 2:
                band2=5;//esta opcion es por si no queremos continuar
                break;

            default:
                printf("Opcion invalida");
                }

            }
        else{

            if(buscar!=x[mitad] && band2==4){//aqui, si no esta el numero y band2 ya no es 5.

                printf("El numero %i no se encuentra en esta serie de numeros \n", buscar);

                printf("Quieres seguir buscando un numero\nSI--->1\nNo--->2\n");//pregunta si queremos seguir buscando
                scanf("%i",&op);
            switch(op){//mismo swith, es para ver si queremos seguir o no
            case 1:
                band2=4;
                printf("Por favor vuelve a ingresar un numero y calcularemos si existe\n");

                printf("\n");
                system("pause");
                system("cls");
                break;
            case 2:
                band2=5;//nos saca de el swtich y cambia el valor de band para ir al return 0
                break;
            default:
                printf("Opcion invalida");
                break;
                }

            }

            }

            if(band2==5){//termina el programa

                    return 0;
                }
            }


}
