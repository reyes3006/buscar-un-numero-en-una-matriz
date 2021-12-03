//#include <stdio.h>
//int main(){
//    int cont = 0;
//    int mul=0;
//    while(cont<=9){
//        cont++;
//        mul= 2*cont;
//        printf("2X %d\n",cont "=",mul);
//
//
//
//}
//}


////me da la tabla que yo quiera
//#include <stdio.h>
//int main(){
//    int cont=0;
//    int mult=0;
//    int var1;
//    prinf("Cual tabla quieres?");
//    scanf("%d",&var1);
//    while(cont<=9){
//            cont++;
//            mult=var1*cont;
//            printf("%d x %d = %d \n",var1,cont,mult);
//    }
//}

////me imprime todas las tablas (1-10)
//#include <stdio.h>
//int main(){
//int cont=0;
//    while (cont<=9){
//        cont++;
//        printf("\n");
//        printf("Es la tabla del %d\n",cont);
//        int var=0;
//        int mult;
//        while(var<=9){
//            var++;
//            mult=cont*var;
//            printf("%d x %d = %d \n",cont,var,mult);
//        }
//    }
//    return 0;
//}

////2 la N
//#include <stdio.h>
//#include <math.h>
//
//int main(){
//    int var=  pow(2,-3);
//    printf("al resultado de dos al cubo es %d", var);
//    return 0;
//    }

//#include <stdio.h>
//#include <math.h>
//int main(){
//    int base;
//    int pot;
//    printf("escribe la base ");
//    scanf("%d",&base);
//    printf("escribe la potencia ");
//    scanf("%d",&pot);
//    int cont=0;
//    int mult=1;
//    while (pot>cont){
//        cont++;
//        mult=base*pot;
//    }
//    printf("el resultado es %d",mult);
//    return 0;
//}

#include<stdio.h>
#include<math.h>

float main(){
    int exp,cont=1,res=1,base=0;
    printf("Dame el valor de la base ");
    scanf("%d",&base);
    printf("Dame el valor del exponente ");
    scanf("%d",&exp);
    if(exp==0){
        res=1;
        printf("El resultado de %d a la %d es: %d",base,exp,res);
    }
    else if(exp<0){
        float res2=0,res1=1;
        exp=exp*-1;
        while(cont<=exp){
            res1=base*res1;
            cont++;
        }
        res2=1/res1;
        exp=exp*-1;
        int res3=res1;
        printf("El resultado de %d a la %d es igual a: 1/%d O bien seria %f",base,exp,res3,res2);
    }else if(exp>0){
            while(cont<=exp){
            res=base*res;
            cont++;
        }
        printf("El resultado de %d a la %d es igual a: %d",base,exp,res);
    }

return 0;

}


