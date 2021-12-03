#include <stdio.h>
int main(){

        int x;
        printf("Dame la dimesion del vector \n");
        scanf("%i" ,&x);
        int vector[x];
        int vector2;//valores que tiene el vector,deben de estar ordenados de manera ascendente
        int i;//contadores
                for(i=0;i<x;i++){
                        printf("Dame el valor del vector # %i\n",i+1);//pide el valor de cada coordenada
                            scanf("%i", &vector [i]);
                            vector2=vector[i];
                }

         printf("El vector de la siguiente manera\n");
                printf("\n");

                    for(i=0;i<x;i++){

                            printf("\t");
                            printf("%i",vector[i]);
                            printf("\t ");



                }

        printf("\n");

        int mitad;//funciona como contador
        int bandera =0;

       int buscar;
        printf("Ingrese el numero que desea buscar: \n");
        scanf("%i",&buscar);

        //inicializamos las variables
        int primero=0;//este vale 0 por la primer posicion

        int segundo=x;//este vale 8 por el numero maximo de elementos

        while(primero<=segundo){//esto para que los apuntadores coincidan en la posicion

            mitad=((primero+segundo)/2);//aqui sacamos la mitad del vector

            //valor buscado
            if(vector[mitad]==buscar){//vector se debe dirigir a el valor en mitad y lo compara con buscar
                                    //la posicion indicada por mitad y lo compara para ver si es igual a buscar
                bandera =1;
                printf("Numero encontrado en la posicion %i\n",mitad+1);

                break;//nos saca del bucle
            }



            //todo este ciclo lo hara hasta que llegue a if(vector[mitad]==buscar), ira partiendo el vector
            //por mitad por mitad  hasta encontrar el valor,por las instrucciones dadas eligira si usa la primer o segunda parte

            //valor de Apuntador 1

            if(vector[mitad]>buscar){//aqui, hace la comparacion para que lado irse, si el mayor o menor
                segundo=mitad-1;
                mitad=((primero+segundo)/2);//el nuevo subvector
                break;
            }
            //valor de Apuntador 2

            if(vector[mitad]<buscar){//aqui, hace la comparacion para que lado irse, si el mayor o menor
                primero=mitad+1;//el nuevo subvector
                mitad=((primero+segundo)/2);

                break;
            }

            if(bandera==1){


                printf("Numero encontrado en la posicion %i\n",mitad+1);

                break;//nos saca del bucle
            }
            if(buscar>vector2){

                printf("El numero %i no se encuentra en esta serie de numeros", buscar);
            return 0;
            }



        }

}


