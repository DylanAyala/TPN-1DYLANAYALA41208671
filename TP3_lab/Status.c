#include "Status.h"


void statusLoadFromText (int date)
{
    if(date==1)
        printf("El archivo fue cargado con exito\n");
    else if (date==-1)
        printf("Error al cargar el archivo\n");
    else if (date==0)
        printf("No se encontro ningun archivo\n");
}



void statusLoadFromBinary (int date)
{
    if(date==1)
        printf("El archivo fue cargado con exito\n");
    else if (date==-1)
        printf("Error al cargar el archivo\n");
    else if (date==0)
        printf("No se encontro ningun archivo\n");
}


int statusAddEmployee (int date)
{
    int addOk=-1;
    if(date==1)
    {
        printf("Carga completada\n\n");
        addOk=1;
    }
    else if(date==0)
    {
        printf("Se cancelo la carga\n\n");
        addOk=0;
    }
    else
        printf("Error al cargar el nuevo usuario\n\n");
    return addOk;
    system("pause");
}



void statusEditEmployee (int date)
{
    if(date==4)
        printf("No hay datos cargados\n");
    else if(date==3)
        printf("No se encontro la id\n");
    else if(date==2)
        printf("La edicion se cancelo correctamente\n");
    else if(date==1)
        printf("Se edito de manera correcta\n");
    else if(date==0)
        printf("No se pudo separar lugar en memoria\n");
    else if(date==-1)
        printf("No se pudo realizar por algun error\n");
}



void statusDeleteEmployee (int date)
{
    if(date==-1)
        printf("Error al ejecutar la eliminacion\n");
    else if(date==0)
        printf("Error de memoria, no se pudo realizar la operacion\n");
    else if(date==1)
        printf("La baja se realizo correctamente\n");
    else if(date==2)
        printf("La baja se cancelo\n");
    else if(date==3)
        printf("No se encontro ningun usuario con esa ID\n");
    else if(date==4)
        printf("No hay datos cargados\n");
}
