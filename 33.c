#include <stdio.h>
#include <math.h>
int main(){
int fact=1,cont=1,n;
printf("De que numero quieres el factorial " );
scanf("%d",&n);
while(cont<=n){
    fact=fact*cont;
    cont++;
}
printf("el factorial de %d es: %d ",n,fact);
return 0;
}



