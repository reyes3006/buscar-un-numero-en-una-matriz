/*#include <stdio.h>

struct info_libro{
char titulo[30];
char autor[30];
char editorial[30];
int ano;


};
libro1={"programacion de computadoras","felipe vega","porrua",2021};

void main(){
printf("el titulo del libro es %s\n",libro1.titulo);
printf("el autor del libro es %s\n",libro1.autor);
printf("el editorial del libro es %s\n",libro1.editorial);
printf("el año del libro es %d\n",libro1.ano);
}*/

/*#include <stdio.h>
struct trabajadores{
    char nombre[30];
    int edad
};
int main(){
    struct trabajadores trab1;
    int i;
    int ndatos;
    printf("cuantos datos de trabajadores quieres ingresar?");
    scanf("%i",&ndatos);
    for(i=0;i<ndatos;i++){
    printf("dame el nombre\n");
    gets(trab1.nombre);
    printf("dame la edad\n");
    scanf("%d",&trab1.edad);
    }

    printf("\nLISTA DE TRABAJADORES\n");
    printf("Nombre\t  Edad");
    for(i=0;i<ndatos;i++){
    printf("\n %s \t   %d",trab1.nombre,trab1.edad);
    }
    /*printf("\nla edad es",trab1.edad);*/

//}

//nombre, matricula,cantidad de calificaciones
#include <stdio.h>
struct estudiante{
char nombre[30];
char matricula[8];
float calif[8];
float estud1;
};
int nombre;
void main(){
    int n;

    struct estudiante.estud1;
    printf("dame el nombre");
    gets(estud1.nombre);
    prinf("dame tu matrula");
    gets(estu1.matricula);
    printf("las calificaciones son");

    for (n=1;n<=8;n++){
        printf("dame la calificacion %d",n);
        scanf("%f",&calif),
    }
}
