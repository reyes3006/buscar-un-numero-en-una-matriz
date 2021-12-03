#include <stdio.h>
int main(){

        int x;//para la dimension
        printf("Dame la dimesion del vector \n");//pide cuantos numeros buscaremos
        scanf("%i" ,&x);
        int vector[x];//concatena la variable x en vector

        int band4=5; //bandera para que sea creciente
        int i; //contador

                for(i=0;i<x;i++){
                        printf("Dame el valor del vector # %i\n",i+1);//pide el valor de cada coordenada
                            scanf("%i", &vector[i]);


                               if(vector[i]<vector[i-1]) {//toma el valor en el ciclo y lo compara con el anterior, asi sabremos si es decreciente o no
                                printf("El numero no es creciente\n");
                                printf("Vuelve a introducir el valor del vector # %i\n",i+1);
                                band4=5;

                                i--;
                               }

                }
                system("PAUSE");
                system("cls");


        int band2=4;//para salirnos de el ciclo
        while(band2==4){//compara la band para slirnos del ciclo
         printf("El vector quedo de la siguiente manera\n ");
                printf("\n");

                    for(i=0;i<x;i++){ //nos imprime el vector

                            printf("\t");
                            printf("%i",vector[i]);
                            printf("\t ");



                }

        printf("\n");


       int buscar;


        printf("Ingrese el numero que desea buscar: \n");
        scanf("%i",&buscar);

        //inicializamos las variables
        int primero=0;//este vale 0 por la primer posicion

        int segundo=x;//este vale x por el numero maximo de elementos

        int mitad;//funciona como contador
        int bandera =0;


        while(primero<=segundo){//esto para que los apuntadores coincidan en la posicion

            mitad=((primero+segundo)/2);//aqui sacamos la mitad del vector


            //valor buscado
            if(vector[mitad]==buscar){//vector se debe dirigir a el valor en mitad y lo compara con buscar
                                    //la posicion indicada por mitad y lo compara para ver si es igual a buscar
                bandera =1;
                band2=5;


                break;//nos saca del bucle
            }

            //todo este ciclo lo hara hasta que llegue a if(vector[mitad]==buscar), ira partiendo el vector
            //por mitad por mitad  hasta encontrar el valor,por las instrucciones dadas eligira si usa la primer o segunda parte

            //valor de Apuntador 1
            if(vector[mitad]<buscar){//aqui, hace la comparacion para que lado irse, si el mayor o menor
                primero=mitad+1;//el nuevo subvector
                mitad=((primero+segundo)/2);



            }

            if(vector[mitad]>buscar){//aqui, hace la comparacion para que lado irse, si el mayor o menor
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
                int salir=4;

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
                printf("Opcion invalida\n");
                printf("Tu opcion no coincide");
                band2=5;


                }


            }
        else{

            if(buscar!=vector[mitad] && band2==4){//aqui, si no esta el numero y band2 ya no es 5.

                printf("El numero %i no se encuentra en esta serie de numeros \n", buscar);

                printf("Quieres seguir buscando un numero\nSI--->1\nNo--->2\n");//pregunta si queremos seguir buscando
                scanf("%i",&op);
                int correc=1;


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
                printf("Opcion invalida\n");
                printf("Tu opcion no coincide");
                band2=5;


                }



            }

            }

            if(band2==5){//termina el programa

                    return 0;
                }
            }


}

