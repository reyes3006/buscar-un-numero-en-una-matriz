////1. leer temperaturas de un mes
//#include <stdio.h>
//int main(){
//    int vlr;
//    printf("Cuantas temperaturas vamos a leer?\n");
//    scanf("%d",&vlr);
//    int temp[vlr];
//    float media;
//    int conta;
//        for(conta=0;conta<vlr;conta++){
//            printf("Dame la temperatura del dia %i\n",conta+1);
//            scanf("%i",&temp[conta]);
//            system("cls");
//            media+=temp[conta];
//        }
//        media=media/conta;
//        printf("la media es %f",media);
////ahora si va jala bien
//}



//2.Los datos ya estan establecidos
//#include <stdio.h>
//int main(){
//    int conta;
////    float media;
//    int temp[10]={15,18,19,20,39,28,46,13,33,55,22};//los datos ya
//                                                    //se los di,cada uno es por dia,
//                                                    //los datos estan mostrados.
//        for(conta=0;conta<11;conta++){
//                printf("la temperatura del dia %i es de %i\n",conta+1,temp[conta]);
//        system("PAUSE");
//        system("cls");
////        media+=temp[conta];
//        }
////        media=media/conta;
////        printf("la media es %f",media);
//}



//#include <stdio.h>
//int main()
//{
//    int matriz[3][3];//arreglo bidimencional
//    int i,j;
//        for (j=0;j<3;j++)
//        {
//            for (i=0;i<3;i++)
//            {
//            printf("Dame el numerode la cordenada [%i,%i]\n",j,i);
//            scanf("%i",&matriz[j][i]);
//
////            system("PAUSE");
////            system("cls");
//            }
//
//        }
//        printf("\n");
//
//        for (j=0;j<3;j++)
//        {
//            for (i=0;i<3;i++)
//            {
//            printf("%i \n",matriz[j][i]);
//            printf("\n");
//            }
//
//        }
//
//}




//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int conta;
//    int matriz[3][3];//arreglo bidimencional
//    int i,j;
//    srand(time(NULL));
//        for (j=0;j<3;j++)
//        {
//            for (i=0;i<3;i++)
//            {
//
//            matriz[j][i]=rand() % 10;
//
//
//
////            system("PAUSE");
////            system("cls");
//            }
//
//        }
//        printf("\n");
//
//        for (j=0;j<3;j++)
//        {
//            for (i=0;i<3;i++)
//            {
//            printf("%i \n",matriz[j][i]);
//
//            }
//            printf("\n");
//        }
//
//}

////preguntar las dimensiones del arreglo
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int x,y;
//    int matriz[x][y];//arreglo bidimencional
//    int i,j;
//    srand(time(NULL));
//        for (x=0;x<3;x++)
//        {
//            for (y=0;y<X;y++)
//            {
//
//            matriz[x][y]=rand() % 10;
//
//
//
////            system("PAUSE");
////            system("cls");
//            }
//
//        }
//        printf("\n");
//
//        for (x=0;x<3;x++)
//        {
//            for (y=0;y<3;y++)
//            {
//            printf("%i \n",matriz[x][y]);
//
//            }
//            printf("\n");
//        }
//
//}


#include <stdio.h>
#include <string.h>
int main(){
    int conta;
    char name[30];
    printf("dame el name: \n");
    scanf("%c",&name);
    int longitud=name;

    for(conta=0;conta<longitud+1;conta++,longitud++){
            if(name[conta]!=NULL){
       printf("en la posicion %i esta la letra %c \n",conta,name[conta]);
       }
    }
}


//#include <stdio.h>
//#include <string.h>
//
//main()
//{
//    int conta,longitud;
//	char texto[30];
//	printf("dame el name: \n");
//	scanf("%s",&name);
//	char *p;
//
//	for(conta=0;longitud=0;conta<texto;conta++,longitud++){
//
//	  printf( "%c\n", *p );	/* Mostramos la letra actual */
//		p++;
//		printf( "en la posicion \"%i\" esta la letra %s caracteres.\n",longitud , texto );
//    }

//	p = texto;
//	while (*p != '\0') {
//		longitud++;
//		printf( "%c\n", *p );	/* Mostramos la letra actual */
//		p++;			/* Vamos a la siguiente letra */
//	}
//	printf( "La cadena \"%s\" tiene %i caracteres.\n", texto, longitud );
//}



////1. leer temperaturas de un mes
//#include <stdio.h>
//int main(){
//    int vlr;
//    printf("Cuantas temperaturas vamos a leer?\n");
//    scanf("%d",&vlr);
//    int temp[vlr];
//    float media;
//    int conta;
//        for(conta=0;conta<vlr;conta++){
//            printf("Dame la temperatura del dia %i\n",conta+1);
//            scanf("%i",&temp[conta]);
//            system("cls");
//            media+=temp[conta];
//        }

//int main(){
////int conta=1;
//char letra ="r";
//char name[30]="jair";
////        for (int i=0;i<10;i++){
////            printf("Dame el nombre");
////            scanf("%c",&nombre);
//            if(strcmp(name,letra)==0){
//               prinf("encontraste la letra") ;
//            }
//            else{
//                printf("vuelve e intentarlo");
////        }
//return 0;
//            }
//}


//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char letra= "r";
//    char name="r";
//  if (strcmp(name,letra) == 0) {
//    printf("Las cadenas son iguales");
//  } else {
//    printf("Las cadenas NO son iguales");
//  }
//  return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//main()
//{
//    int conta;
//	char texto[]="hola";
//	char *p;
//	int longitud=0;
//
//	p = texto;
//	while (*p != '\0') {
//		longitud++;
//		printf( "%c\n", *p );	/* Mostramos la letra actual */
//		p++;			/* Vamos a la siguiente letra */
//	}
//	printf( "La cadena \"%s\" tiene %i caracteres.\n", texto, longitud );
//}



//#include <stdio.h>
//#include <string.h>


//int main(){
//
//    char nombre[30],letra[1];
//    printf("Ingresa el nombre\n");
//    scanf("%c",nombre);
//    printf("Ingresa la letra a buscar\n");
//    scanf("%c",letra);
//        if(strcmp(nombre,letra)==0){
//            printf("No esta la pinche letra");
//        }
//        else{
//           printf("Esta la pinche letra");
//        }
//}

//#include <stdio.h>
//#include <string.h>
//

//int main(){
//
//int c;
//char letra[1];
//printf("Dame La letra a buscar: \n");
//scanf("%c", &letra);
//char nombre[30];
//printf("Dame el nombre: \n ");
//scanf("%c", &nombre);
//
//    for(c=0; c<31; c++){
//
//
//
//        if(nombre[c] != NULL){
////                printf("En la posicion %i la letra es: %c \n", c, nombre[c]);
//
//                if (strcmp((nombre[c] != NULL), letra) == 0) {
//                printf("Las cadenas son iguales\n");
//            }
//                else {
//                printf("Las cadenas NO son iguales\n");
//            }
//
//
//        }
//
//
//
//    }
//
//}




//include<stdio.h>
//int main(void)
//{
//    char letra='m';
//    char palabra='n';
//
//    if(letra < palabra)
//        printf("%c es mas que pequeña que %c.", letra , palabra);
//
//    if(letra > palabra)
//        printf("%c is smaller than %c.", firstCharValue, secondCharValue);
//
//    if(firstCharValue == secondCharValue)
//        printf("%c is equal to %c.", firstCharValue, secondCharValue);
//
//    return 0;
//}

//#include <stdio.h>
//int main(){
//    int conta,correcto=0;
//    char letra [1] ;
//    printf("Cual letra buscaras?\n");
//    scanf(" %s",&letra);
//    printf("\nla letra escogida es %s \n",letra);
//    char name [30];
//    while(correcto==0){
//            fflush;
//    printf("\nCual es el nombre?\n");
//    scanf(" %s",&name);
//    printf("\n tu palabra  es %s \n",name);
//    for (conta=0;conta<31;conta++){
//
//      if (name[conta]!=NULL){
//
//              if(letra==name[conta]){
//            printf("Ahuevo perro, ya la hiciste");
//            correcto==1;
//                }
//                else{
//            printf("awanta, aun no la encuentras %i\n",conta);
//                    }
//
//
//        }
//    }
//    system("pause");
//    system("cls");
//
//}
//}


/*#include <stdio.h>
#include <string.h>

int main(){
    int x=0,y=0,z=0,w=0,validar=0;

    int correcto=0,conta=0;
    while(correcto==0){
            if(conta<3){

    char name [30];
    printf("\nCual es el nombre(si tienes 2, el espacio intercambialo por '_')?\n");
    scanf("%s",&name);

    char letra[30];
    printf("\nCual letra buscaras?\n");
    scanf("%s",&letra);

     system("cls");

       while(name[x]!='\0'){////longitud de la cadena que ingreso el user(name)
        x++;////tamaño de la frase
       }
       while(letra[w]!='\0'){
             w++;//tamaño de la letra
        }

                for(y=0;y<x;y++){
                    z=0;
                            while(letra[z]!='\0'){
                                if(letra[z]==name[y+z]){
                                    validar++;
                                }
                                z++;
                            }

                            if(validar==w){
                                printf("se encontro la letra %s y esta en la posision %d",letra,y+1);
                                y=x;
                                correcto==1;

                            }
                            else{
                                validar=0;
                            }
            }
                if(validar!=w){
                    printf("No hay coincidencias");
                    correcto==1;
                    conta++;

                }

}
}


//#include <stdio.h>
//
//int main(){
//    int conta=0,conta2=0;
//    char letra[30];
//    printf("Cual letra buscaras?\n");
//    scanf("%s",&letra);
//    char nombre[30];
//    for(int i=0; i<30; i++){
//        nombre[i] = NULL;
//    }
//    printf("Dame el nombre: ");
//    scanf("%s", &nombre);
//
//    for(conta=0; conta<31; conta++){
//        if(nombre[conta]!= NULL) {
//        }
//
//    }
//    for(conta=0;conta<31; conta++){
//
//                if(nombre[conta]== letra){
//                    printf("Felicidades, encontraste la letra %s, esta en la posicion %i",letra,nombre[conta]);
//
//                }
//                else{
//                    printf("No hay coincidencias\n");
//                }
//            }
//
//    }
//}

#include <stdio.h>

int main(){

    char nombre[30];
    int encontrado = 0;
    int r=0;

    while(encontrado == 0){
        //Limpiamos el arreglo
        for(int i=0; i<30; i++){
            nombre[i] = NULL;
        }

        printf("Dame un nombre: ");
        scanf("%s", &nombre);

        for(int i = 0; i<30; i++){
            if(nombre[i] != NULL){
                if(nombre[i] == 'r' || nombre[i] == 'R'){
                    r++;
                    encontrado = 1;
                }
*/
