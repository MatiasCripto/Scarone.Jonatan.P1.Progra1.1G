#include <stdio.h>
#include <stdlib.h>

#define TAM 10

typedef struct
{
    int id;
    char nombre[20];
    char tipo[50];
    float efectividad;

} eVacuna;

int aplicarAumento(float precio);
char reemplazarCaracteres(char cadena[], char pCaracter, char sCaracter, int tam);
int ordenarArray(eVacuna vec[], int tam);


int main()
{

   char cad[TAM] = "jonatan";
   char pCaracter = 'a';
   char sCaracter = 'x';
   reemplazarCaracteres(cad, pCaracter, sCaracter, TAM);

   aplicarAumento(111);

   ordenarArray(vec, TAM);

}
int aplicarAumento(float precio)
{
    int todoOk = 0;

    if(precio > 0)
    {
        precio = precio * 1.05;
        printf("%.2f\n", precio);

        todoOk = 1;
    }
   return todoOk;
}

char reemplazarCaracteres(char cadena[], char pCaracter, char sCaracter, int tam)
{
    int todoOk = 0;
    int contador = 0;

    if(cadena != NULL)
    {
        for(int i = 0; i < tam; i++)
        {
            if(cadena[i] == pCaracter)
            {
                cadena[i] = sCaracter;
                contador++;
            }
        }
        todoOk = 1;
        printf("%s\n", cadena);
        printf("%d\n", contador);
        
       
    }
    return todoOk;
}
int ordenarArray(eVacuna vec[], int tam)
{
    int todoOk = 0;
    int swap;
    if(vec != NULL && tam >0)
    {
            for(int i = 0; i < tam-1; i++)
            {
                for(int j = i+1; j < tam; j++)
                {
                    if((vec.tipo == vec.tipo && vec.efectividad > vec.efectividad) || (vec.tipo > vec.tipo ))
                    {
                        swap = vec[i];
                        vec[i] = vec[j];
                        vec[j] = swap;
                    }
                }
            }
        todoOk = 1;
    }
     return todoOk;

}

