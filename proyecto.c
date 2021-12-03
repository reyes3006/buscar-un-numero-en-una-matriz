#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define USUARIO "Equipo"
#define CLAVE "clave"
#define LONG 80
typedef struct {


    char titulo[60];
    char autor[40];
    char editorial[50];
    float precio;
    int codigo;
    int stock;
} dato;

void tiempo()
{

            clock_t start_t, end_t;
            int i;
            start_t = clock();
            for(i=0; i< 1000000000;i++)
                {
                    }
            end_t = clock();

}
void continuar()
{
    printf("Presione una tecla para continuar\n");
    getch();
    system("cls");


}


void cargar()
{
        FILE *archivo;
    archivo=fopen("libros.bat","ab");;

    dato libros;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
    fflush(stdin);
    printf("Ingrese el codigo de identificacion de el libro: ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    scanf("%i",&libros.codigo);
    fflush(stdin);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
    printf("Ingrese el titulo del libro: ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    scanf("%[^\n]",&libros.titulo);
    fflush(stdin);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
    printf("Ingrese el autor del libro: ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    scanf("%[^\n]",&libros.autor);
    fflush(stdin);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
    printf("Ingrese el editorial del libro: ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    scanf("%[^\n]",&libros.editorial);
    fflush(stdin);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
    printf("Ingrese stock del libro: ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
   scanf("%i",&libros.stock);
   fflush(stdin);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
    printf("Ingrese el precio del libro: ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
   scanf("%f",&libros.precio);
   fflush(stdin);

    fwrite(&libros, sizeof(dato), 1, archivo);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    printf("Se agrego el libro\n");
    fclose(archivo);
    continuar();
}


void listado()
{
    FILE *archivo;
    archivo=fopen("libros.bat","rb");
    if (archivo==NULL){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        printf("Lo sentimos, aun no hay libros registrados\n");
        printf("presione cualquier tecla para continuar");
        getch();
        system("cls");
        return menu();

    }
    dato libros;
    fread(&libros, sizeof(dato), 1, archivo);
    while(!feof(archivo))
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
        printf("--------------------------------------|\n");
        printf("Titulo: %s\n",libros.titulo);
        printf("Autor: %s\n",libros.autor);
        printf("Editorial: %s\n",libros.editorial);
        printf("Precio: %0.2f\n",libros.precio);
        printf("Stock: %i\n",libros.stock);
        printf("Codigo de producto: %i\n",libros.codigo);
        printf("--------------------------------------|\n");
        fread(&libros, sizeof(dato), 1, archivo);
    }
    fclose(archivo);
    continuar();
}


void consulta()
{
    FILE *archivo;
    archivo=fopen("libros.bat","rb");
    if (archivo==NULL)
            if (archivo==NULL){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        printf("Lo sentimos, aun no hay libros registrados\n");
        printf("presione cualquier tecla para continuar");
        getch();
        system("cls");
        return menu();

    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
    printf("Ingrese el codigo del libro a consultar: ");
    int buscar;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    scanf("%i",&buscar);
    dato libros;
    int existe=0;
    fread(&libros, sizeof(dato), 1, archivo);
    while(!feof(archivo))
    {
        if (buscar==libros.codigo)
        {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
        printf("--------------------------------------|\n");
        printf("Codigo de producto: %i\n",libros.codigo);
        printf("Titulo: %s\n",libros.titulo);
        printf("Autor: %s\n",libros.autor);
        printf("Editorial: %s\n",libros.editorial);
        printf("Precio: %0.2f\n",libros.precio);
        printf("Stock: %i \n",libros.stock);

        printf("--------------------------------------|\n");

        existe=1;
           break;
        }
       fread(&libros, sizeof(dato), 1, archivo);
    }
    if (existe==0){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        printf("No existe un producto con dicho codigo\n");
    }
    fclose(archivo);
    continuar();
}

void modificacionstock()
{

    FILE *archivo;
    archivo=fopen("libros.bat","r+b");
    if (archivo==NULL){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        printf("Lo sentimos, aun no hay libros registrados\n");
        printf("presione cualquier tecla para continuar");
        getch();
        system("cls");
        return menu();

    }
    int op;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
    printf("Ingrese el codigo de producto a modificar:\n");
    int buscar;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    scanf("%i",&buscar);
    dato libros;
    int existe=0;
    fread(&libros, sizeof(dato), 1, archivo);
    while(!feof(archivo))
    {
        if (buscar==libros.codigo)
        {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            printf("Datos actuales:\n");
            int nuevostock;
        printf("--------------------------------------|\n");
        printf("Titulo: %s\n",libros.titulo);
        printf("Autor: %s\n",libros.autor);
        printf("Editorial: %s\n",libros.editorial);
        printf("Precio: %0.2f\n",libros.precio);
        printf("Stock: %i\n",libros.stock);
        printf("Codigo de producto: %i\n",libros.codigo);
        printf("--------------------------------------|\n");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
            printf("Ingrese el nuemero de libros que llegaron:\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            scanf("%i",&nuevostock);
            libros.stock=libros.stock+nuevostock;
            fflush(stdin);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            printf("Se han añadido %i libros\n",nuevostock);
            printf("Se modifico el stock para el libro '%s'.\nEl nuevo stock es %i\n",libros.titulo,libros.stock);

            existe=1;
           int pos=ftell(archivo)-sizeof(dato);
           fseek(archivo,pos,SEEK_SET);
           fwrite(&libros, sizeof(dato),1, archivo);

           break;
        }
        fread(&libros, sizeof(dato), 1, archivo);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    if (existe==0)
        printf("No existe un producto con dicho codigo\n");
    fclose(archivo);
    continuar();
}
void modificacionprecio()
{

    FILE *archivo;
    archivo=fopen("libros.bat","r+b");
    if (archivo==NULL){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
        printf("Lo sentimos, aun no hay libros registrados\n");
        printf("presione cualquier tecla para continuar");
        getch();
        system("cls");
        return menu();

    }
    int op;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
    printf("Ingrese el codigo de producto a modificar: \n");
    int buscar;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    scanf("%i",&buscar);
    dato libros;
    int existe=0;
    fread(&libros, sizeof(dato), 1, archivo);
    while(!feof(archivo))
    {
        if (buscar==libros.codigo)
        {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            printf("Datos actuales: \n");
            int nuevostock;
        printf("--------------------------------------|\n");
        printf("Titulo: %s\n",libros.titulo);
        printf("Autor: %s\n",libros.autor);
        printf("Editorial: %s\n",libros.editorial);
        printf("Precio: %0.2f\n",libros.precio);
        printf("Stock: %i\n",libros.stock);
        printf("Codigo de producto: %i\n",libros.codigo);
        printf("--------------------------------------|\n");

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
            printf("Ingrese el nuevo precio de el libro: \n");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            scanf("%f",&libros.precio);

            fflush(stdin);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            printf("Se modifico el precio para el libro '%s'.\nEl nuevo precio  es %0.2f\n",libros.titulo,libros.precio);
           int pos=ftell(archivo)-sizeof(dato);
           fseek(archivo,pos,SEEK_SET);
           fwrite(&libros, sizeof(dato),1, archivo);
           existe=1;
           break;
        }
        fread(&libros, sizeof(dato), 1, archivo);
    }
    if (existe==0)
        printf("No existe un producto con dicho codigo\n");
    fclose(archivo);
    continuar();
}
void vender()
{

    FILE *archivo;
    archivo=fopen("libros.bat","r+b");
    if (archivo==NULL){
        printf("Lo sentimos, aun no hay libros registrados\n");
        printf("presione cualquier tecla para continuar");
        getch();
        system("cls");
        return menu();

    }
    dato libros;
    int op;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
    printf("Ingrese el codigo del libro a vender: \n");
    int buscar;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    scanf("%i",&buscar);

    int existe=0,s=1;
    fread(&libros, sizeof(dato), 1, archivo);
    while(!feof(archivo))
    {
        if (buscar==libros.codigo)
        {
            int venta;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            printf("Datos actuales:\n");
        printf("--------------------------------------|\n");
        printf("Titulo: %s\n",libros.titulo);
        printf("Autor: %s\n",libros.autor);
        printf("Editorial: %s\n",libros.editorial);
        printf("Precio: %0.2f\n",libros.precio);
        printf("Stock: %i\n",libros.stock);
        printf("Codigo de producto: %i\n",libros.codigo);
        printf("--------------------------------------|\n");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
        printf("Ingrese el numero de libros a vender: \n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            scanf("%i",&venta);

            if(libros.stock<venta){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                printf("Lo sentimos no contamos con ese numero de libros %i\n",venta);
                printf("presione una tecla para iniciar de nuevo");
                getch();
                system("cls");
                return vender();

            }
            else{
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                printf("Felicidades, usted ha adquirido %i libros de '%s' con un precio de %0.2f c/u.\nEl total a pagar es: %0.2f\n",venta,libros.titulo,libros.precio,(libros.precio*venta));
                libros.stock=libros.stock-venta;

            }
            fflush(stdin);



           int pos=ftell(archivo)-sizeof(dato);
           fseek(archivo,pos,SEEK_SET);
           fwrite(&libros, sizeof(dato),1, archivo);
           existe=1;
           break;
        }
        fread(&libros, sizeof(dato), 1, archivo);

    }
    if (existe==0)
        printf("No existe un producto con dicho codigo\n");
    fclose(archivo);
    continuar();
}
void login()
{
        char usuario[LONG];
        char clave[LONG];

    int intento=0,ingresa=0;

do{
        system("cls");

    printf("\t\tINICIO DE SESION\n");
        printf("\t\t---------------\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        printf("USUARIO: ");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        scanf("%s",& usuario);
        fflush(stdin);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        printf("CLAVE: ");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        scanf("%s",& clave);
        fflush(stdin);

        if(strcmp(usuario, USUARIO)== 0 && strcmp(clave, CLAVE)== 0){//strcmp para comparar cadenas la "," separa los datos a verificar
            ingresa = 1;

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 92);
            printf("Validando datos\n");
            fflush(stdin);
            tiempo();
            printf("  \tAcceso concedido\n");
            tiempo();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        }

        else{

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 92);
            printf("Validando datos\n");
            intento++;
            tiempo();
            printf("\t\t\tAcceso denegado\n");
            printf("\n\t\tUsuario y/o Contrasena Incorrectos\n");
            tiempo();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        }

}while (intento < 3 && ingresa==0);
system("cls");
if (intento == 3){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        printf("\nHaz superado el maximo de intentos permitidos\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        exit(1);
}

}
void menu()
{
    int opcion;
    do {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
        printf("\t\tBIENVENIDO AL MENU PRINCIPAL\n");
        printf("\t\t---------------------------\n\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        printf("1 - Agregar libros\n");
        printf("2 - Listado completo de libros.\n");
        printf("3 - Consulta de un libro por su codigo.\n");
        printf("4 - Modificacion del stock de un libro. \n");
        printf("5 - Modificacion del precio de un libro. \n");
        printf("6 - Vender un libro. \n");
        printf("7 - Finalizar\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
        printf("Ingrese su opcion:\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        scanf("%i",&opcion);
        switch (opcion) {
            case 1:cargar();


                   break;
            case 2:listado();
                   break;
            case 3:consulta();

                   break;
            case 4:modificacionstock();
                    break;

            case 5:modificacionprecio();

                   break;

            case 6:
                vender();
                break;

            case 7:
                printf("Gracias por su compra.");
                exit(1);

            default:
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
               printf("elige una opcion correcta\n");
               tiempo();
               system("cls");

        }
    } while (opcion!=7);

    return menu;


}

int main()
{
    login();
    menu();

}
