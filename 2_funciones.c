            //
            //SI USAS EL PROGRAMA,UTILIZA EL QUE MEJOR TE CONVENGA O TE ACOMODES
            //

#include <stdio.h>

float IVA();
float Pagar();

int main(){

printf("\nEl precio con IVA es de %.1f pero se le aplico un descuento del 15%% asi que usted pagara %.3f \n", IVA(), Pagar());

return 0;
}

float IVA(){
            //IVA Y PRECIO DEFINIDOS
float precioci,iva=1.16,precio=30;




        //SACA EL IVA DEL PRODUCTO CON VALORES DEFINIDOS
precioci=iva*precio;



        //DEVUELVE EL VALOR DEL IVA DE LOS VALORES DEFINIDOS
return precioci;



}

float Pagar(){

        //PORCENTAJE DE DESCUENTO DEFINIDO
float desc=.85;





        //1.desc que ya tiene el porcentaje de descuento
return IVA()*desc;

}


