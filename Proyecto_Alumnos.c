#include <stdio.h>

typedef struct Entidad
{ 
	char Matricula[10];
	char Nombre[60];
	char Apellido[40];
	char Grupo[5];
	char Materia[50];
	float  Calificacion;
	//Entidad.Matricula[0]='z';
}Alumnos;
//void Promedios(Alumnos * puntero);
void Alta(Alumnos * puntero);
void Listar(Alumnos * puntero);
void Busqueda(Alumnos * puntero);
void Modificar(Alumnos * puntero);
int main()
{
int opcion=9;	
Alumnos Registro_2020[60];
Alumnos * puntero;
Alumnos * lt;
lt=&Registro_2020[0];
puntero=&Registro_2020[0];
puntero->Matricula[0]='z';

while (opcion!=0)
{
printf("---------MENU----------\n");
printf("[1] Alta Alumnos\n");
printf("[2] Busqueda Alumnos\n");
printf("[3] Listar Alumnos\n");
printf("[4] Ver Promedio Maximo\n");
printf("[5] Ver promedio Minimo\n");
printf("[6] Modificar Dato\n");
printf("[7] Ver promedios\n");
printf("[8] Eliminar Dato\n");
printf("[0] Salir del programa\n");
scanf("%d",&opcion);

switch(opcion)
{

case 1:{
	        while(lt->Matricula[0]!='z')
								{
									lt=lt+1;
								}
	       
	       Alta(lt);
	      }break;	
case 2:{
       Busqueda(puntero);
       }break;
case 3:{
       Listar(puntero);
       }break;

case 6:{
       Modificar(puntero);
       }break;
case 7:{
       //Promedios(puntero);
       }break;
	
	
}

};

	
	return 4;
	}


void Alta(Alumnos * puntero)
{
	int opcion=9;

	while (opcion!=0)
{
printf("1--------Desea Agregar alummos oprime 1 sino oprima 0--------\n");
scanf("%d",&opcion);

if (opcion==1)
{
printf("captura la matricula\n");
getchar();
gets(puntero->Matricula);
printf("captura el nombre\n");
gets(puntero->Nombre);
printf("captura apellido\n");
gets(puntero->Apellido);
printf("captura el grupo\n");
gets(puntero->Grupo);
printf("captura la materia\n");
gets(puntero->Materia);
printf("captura la calificacion la materia\n");
scanf("%f",&puntero->Calificacion);
puntero=puntero+1;
puntero->Matricula[0]='z';

}
};
}


void Listar(Alumnos * puntero)
{
	
while(puntero->Matricula[0]!='z')
{
printf("matricula %s\n",puntero->Matricula);
printf("nombre %s \n",puntero->Nombre);
printf("apellido %s\n",puntero->Apellido);
printf("grupo %s \n",puntero->Grupo);
printf("materia %s \n",puntero->Materia);
printf("calificacion %f \n",puntero->Calificacion);
puntero=puntero+1;
};
}

void Busqueda(Alumnos * puntero)
{
char Matricula[10];
int val;
printf("Captura la matricula que deseas buscar \n");	
getchar();
gets(Matricula);

while(puntero->Matricula[0]!='z')
{
	val=strcmp(puntero->Matricula,Matricula);
	if (val==0)
	 {
  printf("matricula %s\n",puntero->Matricula);
  printf("nombre %s \n",puntero->Nombre);
  printf("apellido %s\n",puntero->Apellido);
  printf("grupo %s \n",puntero->Grupo);
  printf("materia %s \n",puntero->Materia);
  printf("calificacion %f \n",puntero->Calificacion);
  }
puntero=puntero+1;
};
	
}



void Modificar(Alumnos * puntero)
{
char Matricula[10];
int val;
printf("Captura la matricula que deseas modificar \n");	
getchar();
gets(Matricula);

while(puntero->Matricula[0]!='z')
{
	val=strcmp(puntero->Matricula,Matricula);
	if (val==0)
	 {
printf("captura el nombre\n");
gets(puntero->Nombre);
printf("captura apellido\n");
gets(puntero->Apellido);
printf("captura el grupo\n");
gets(puntero->Grupo);
printf("captura la materia\n");
gets(puntero->Materia);
printf("captura la calificacion la materia\n");
scanf("%f",&puntero->Calificacion);
  }
puntero=puntero+1;
};
	
}
	

