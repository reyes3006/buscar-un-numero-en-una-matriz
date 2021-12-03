#include <stdio.h>
int main(){
    int salir=0;
    while(salir==0){
            int op;
                    printf("Que tipo de operacion quieres hacer en la matriz?\n");
                    printf("matriz + matriz ------->1\n");
                    printf("matriz - matriz-------->2\n");
                    printf("matriz X matriz ------->3\n");
                    printf("matriz X n------------->4\n");
                    printf("Salir------------------>5\n");
                    printf("Selecciona el numero respecto a tu operacion\n");
                    scanf("%i",&op);

                    system("cls");
                    if(op!=4){
                            if(op!=5){


//pedir dimesion, numeros que conforman la matriz y el tipo de operacion, metiendo un switch case.

        int filas_a,columnas_a;//para las dimesiones
                    printf("Dame las dimesiones de la primera matriz\n");
                    printf("Dame la fila de tu matriz\n");
                        scanf("%i" ,&filas_a);
                    printf("Dame las columna de tu matriz\n");
                        scanf("%i",&columnas_a);
//
        int matriza[filas_a][columnas_a];
        int i,j;//contadores
                for(i=0;i<filas_a;i++){//compara las dimenciones  de la fila  con i (contador) para que no sean mayores a ella
                    for(j=0;j<columnas_a;j++){//compara las dimenciones de la columna con j (contador) para que no sean mayores a ella
                        printf("Dame el numero de la cordenada [ %i , %i ]\n",i+1,j+1);//pide el valor de cada coordenada
                            scanf("%i", &matriza [i][j]);
                    }
                }

        system("cls");

        int filas_b,columnas_b;
            printf("Dame las dimesiones de la segunda matriz\n");
            printf("Dame la fila de tu matriz\n");
                scanf("%i" ,&filas_b);
            printf("Dame las columna de tu matriz\n");
                scanf("%i",&columnas_b);

        int matrizb [filas_b][columnas_b];//guara los valores
                for(i=0;i<filas_b;i++){//compara las dimenciones para que no sean mayores a ella
                    for(j=0;j<columnas_b;j++){//compara las dimenciones para que no sean mayores a ella
                        printf("Dame el numero de la cordenada [ %i , %i ]\n",i+1,j+1);//pide el valor de cada coordenada
                            scanf("%i", &matrizb [i][j]);
                    }
                }

            system("cls");

                printf("Las matrices quedaron de la siguiente manera\n");
                printf("\n");
                printf("\t Primer matriz\n");
                printf("\n");
                    for(i=0;i<filas_a;i++){
                        for(j=0;j<columnas_a;j++){

                            printf("\t");
                            printf("%i",matriza [i][j]);
                            printf("\t ");
                    }
                    printf("\t \n ");
                    printf("\n");
                }


            printf("\n");
            printf("\t Segunda matriz\n");
            printf("\n");
                for(i=0;i<filas_b;i++){
                    for(j=0;j<columnas_b;j++){

                    printf("\t");
                    printf("%i",matrizb [i][j]);

                    printf("\t");
                    }
                    printf("\t \n");
                printf("\n");
                }

        system(" PAUSE");
        system("cls");

        printf("\n ");

        int matrizc[filas_a][columnas_b];
        int k;


            switch (op)
        {
            case 1 :
                if(filas_a==filas_b&&columnas_b==columnas_b){////lo dejo por que lo ocupare cuando quite el if global para las mult
                    printf("la suma con operaciones en las matrices es \n");
                    printf("\n");
                        for(i=0;i<filas_a;i++){
                            for(i=0;i<filas_b;i++){
                                for(j=0;j<columnas_a;j++){
                                    for(j=0;j<columnas_b;j++){
                                printf("\t");
                                printf("%i  +  %i  =  %i",matriza[i][j],matrizb[i][j],(matriza[i][j]+matrizb[i][j]));
                                printf("\t");
                                    }
                                }
                        printf("\t \n");
                        printf("\n ");
                            }
                        }

                printf("\n");

                printf("la suma directa en las matrices es \n");
                        for(i=0;i<filas_a;i++){
                            for(i=0;i<filas_b;i++){
                                for(j=0;j<columnas_a;j++){
                                    for(j=0;j<columnas_b;j++){
                                printf("\t");
                               printf("%i",(matriza[i][j]+matrizb[i][j]));
                                printf("\t");


                                    }
                                }
                        printf("\t \n");
                        printf("\n ");
                            }
                        }

                printf("\n");

            }


                else{
                    printf("No se pueden sumar la matrices, no tienen la misma dimension\n");////lo dejo por que lo ocupare cuando quite el if global para las mult


                }
                break;
                fflush(stdin);
            case 2 :
                if(filas_a==filas_b&&columnas_b==columnas_b){////lo dejo por que lo ocupare cuando quite el if global para las mult
                    printf("la resta con operaciones en las matrices es \n");
                    printf("\n");
                        for(i=0;i<filas_a;i++){
                            for(i=0;i<filas_b;i++){
                                for(j=0;j<columnas_a;j++){
                                    for(j=0;j<columnas_b;j++){
                                printf("\t");
                                printf("%i  -  %i  =  %i",matriza[i][j],matrizb[i][j],(matriza[i][j]-matrizb[i][j]));
                                printf("\t");
                                    }
                                }
                        printf("\t \n");
                        printf("\n ");
                            }
                        }

                printf("\n");

                printf("la resta directa en las matrices es \n");
                        for(i=0;i<filas_a;i++){
                            for(i=0;i<filas_b;i++){
                                for(j=0;j<columnas_a;j++){
                                    for(j=0;j<columnas_b;j++){
                                printf("\t");
                               printf("%i",(matriza[i][j]-matrizb[i][j]));
                                printf("\t");


                                    }
                                }
                        printf("\t \n");
                        printf("\n ");
                            }
                        }

                printf("\n");

            }


                else{
                    printf("No se pueden sumar la matrices, no tienen la misma dimension\n");////lo dejo por que lo ocupare cuando quite el if global para las mult


                }
                break;
                fflush(stdin);
            case 3:

                        if(columnas_a==filas_b){


                            printf("la  multiplicacion en las matrices es \n");

                            for(i=0;i<filas_a;i++){
                                    for(j=0;j<columnas_b;j++){
                                        matrizc[i][j]=0;
                                        for(k=0;k<columnas_a;k++){

                                                matrizc[i][j]+=matriza[i][k]*matrizb[k][j];
                                        }
                                    }
                            }

                            for(i=0;i<filas_a;i++){

                                    for(j=0;j<columnas_b;j++){
                                        printf("\t");
                                        printf("%i",matrizc[i][j]);
                                    printf("\t");
                                    }
                                    printf("\n");
                                    printf("\n");

                            }


                }
                else{
                            printf("La multiplicacion de matrices no se puede realizar\n");
                        }


        break;
        fflush(stdin);

    }

                        system("PAUSE");
                        system("cls");

    }
    else{

            if(op==5){

                      return 0;



        }
        fflush(stdin);
    }
    }
    else{
            if(op==4){
                int filas_m,columnas_m;//para las dimesiones
                int n;
                    printf("Dame las dimesiones de la  matriz\n");
                    printf("\n");
                    printf("Dame la fila de tu matriz\n");
                        scanf("%i" ,&filas_m);
                    printf("Dame las columna de tu matriz\n");
                        scanf("%i",&columnas_m);
                    printf("Por que numero multiplicaras la matriz?\n");
                    scanf("%i",&n);

        int matrizm [filas_m][columnas_m];
        int i,j;//contadores
                for(i=0;i<filas_m;i++){//compara las dimenciones  de la fila  con i (contador) para que no sean mayores a ella
                    for(j=0;j<columnas_m;j++){//compara las dimenciones de la columna con j (contador) para que no sean mayores a ella
                        printf("Dame el numero de la cordenada [ %i , %i ]\n",i+1,j+1);//pide el valor de cada coordenada
                            scanf("%i", &matrizm [i][j]);
                    }
                }
                system("cls");
                printf("La matriz quedo de la siguiente forma\n");

                for(i=0;i<filas_m;i++){
                        for(j=0;j<columnas_m;j++){

                            printf("\t");
                            printf("%i",matrizm [i][j]);
                            printf("\t ");
                    }
                    printf("\t \n ");
                    printf("\n");
                }
                            printf("La operacion de la multiplicacion del numero %i x matriz es \n",n);
                            for(i=0;i<filas_m;i++){
                                for(j=0;j<columnas_m;j++){

                                printf("\t");
                                printf("%i * %i  =  %i",n,matrizm[i][j],(n* matrizm[i][j]));
                                printf("\t");


                                    }
                        printf("\t \n");
                        printf("\n ");
                                }

                            printf("La multiplicacion directa del numero %i x matriz es \n",n);

                            for(i=0;i<filas_m;i++){
                                for(j=0;j<columnas_m;j++){

                                printf("\t");
                                printf("%i",(n* matrizm[i][j]));
                                printf("\t");


                                    }
                        printf("\t \n");
                        printf("\n ");
                                }
            }
            else{
                printf("elige la opcion correcta\n");
            }
            fflush(stdin);
        }
        system("pause");
        system("cls");
    }

}
