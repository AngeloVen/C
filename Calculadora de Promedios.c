#include <stdlib.h>
#include <stdio.h>
int main()
{
    int cont = 0, valor = 0, choose, ac = 0, sum = 0;
    const int cent = 0;
    double prom;

    printf("\nEste programa calcula el promedio de los valores que ingrese\nEscriba los valores pulsando Enter cada vez que desee agregar uno nuevo\nCuando haya ingresado el ultimo valor y no desee agregar uno mas teclee 0 y Enter para calcular el promedio de los valores\n\n");
    printf("Este programa solo admite valores numericos, cualquier valor distinto a un numero ocasionara un error\n\n");
    system("pause");
    system("CLS");
    while (choose != 1)
    {
        printf("Introduzca el primer valor numerico: ");
        scanf("%d", &valor);
        while (valor != cent) {
            cont++;
            sum += valor;
            printf("Introduzca el siguiente valor: ");
            scanf("%d", &valor);
            ac++;
        }
        prom = (double)sum / ac;
        printf("\nEl promedio de los %d valores ingresados es: %.3f\n", ac, prom);
        printf("\nDesea calcular otro promedio?\n\nSi, presione 0 \nNo, presione 1\n... ");
        scanf("%d", &choose);
        system("CLS");
        sum = 0; //aqui regrese los valores de las variables a "0"
        cont= 0; //porque al querer volver a calcular otro promedio sumaba y hacia las operaciones sobre lo valores anteriores,
        ac = 0;  //entonces al regresarlos a 0, en el siguiente ciclo seria empezando de nuevo sin reiniciar el programa
    }
    system("CLS");
    printf("\n\n            Gracias por usar este programa                       \n\n");
    printf("  *******    ******      *****       ******     ****     ****          \n");
    printf("  **        **         ***     *    **    **    ** **   ** **          \n");
    printf("  ****       ******    **           **    **    **   ***   **          \n");
    printf("  **              **   ***     *    **    **    **         **          \n");
    printf("  *******    ******      *****       ******     **         **  \n\n\n\n\n");

    printf("  *****   **    **       ******       ******     **       **     ******          \n");
    printf("  **   **  **  **       **    **     **    **    **       **    ***    *         \n");
    printf("  ******     **         ********     **    **     **     **     **               \n");
    printf("  **   **    **         **    **     **    **      **   **      ***    *         \n");
    printf("  ******     **         **    **      ******        *****        ******  \n\n\n\n\n");
    printf("Escuela Superior de Computo | Licenciatura en Ciencia de Datos\nFundamentos de Programacion by Cecilia Albortante Morato\nVences Cruz Angel Octavio | 1AV1\n\n");
    system("pause");
    system("CLS");
    return 0;
}