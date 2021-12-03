#include <stdio.h>
int main(){
    int cont=0;
    int mult=0;
    int var1;
    prinf("Cual tabla quieres?");
    scanf("%d",&var1);
    while(cont<=9){
            cont++;
            mult=var1*cont;
            printf("%d x %d = %d \n",var1,cont,mult);
    }
}
