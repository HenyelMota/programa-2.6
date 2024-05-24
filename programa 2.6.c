#include <stdio.h>

int main()
{
    float SAL;                       // Declara la variable flotante SAL (salario)
    int NIV;                         // Declara la variable entera NIV (nivel académico)
    printf("Ingrese el nivel academico del profesor:  "); // Pide al usuario que ingrese el nivel académico del profesor
    scanf("%d", &NIV);               // Lee un valor entero del usuario y lo asigna a NIV
    printf("Ingrese el salario:  "); // Pide al usuario que ingrese el salario
    scanf("%f", &SAL);               // Lee un valor flotante del usuario y lo asigna a SAL
    switch(NIV)                      // Selecciona el incremento del salario según el nivel académico (NIV)
    {
        case 1: SAL = SAL * 1.0035; break; // Caso 1: Incrementa el salario en un 0.35%
        case 2: SAL = SAL * 1.0041; break; // Caso 2: Incrementa el salario en un 0.41%
        case 3: SAL = SAL * 1.0048; break; // Caso 3: Incrementa el salario en un 0.48%
        case 4: SAL = SAL * 1.0053; break; // Caso 4: Incrementa el salario en un 0.53%
    }
    printf("\n\nNivel: %d \tNuevo salario: %8.2f", NIV, SAL); // Imprime el nivel académico y el nuevo salario formateado con dos decimales

    return 0;

}
