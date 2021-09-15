#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int cont, valor, N, ac = 0, P, Q, choose;
    const int cent = 0;
    int sum = 0;
    double prom;

    printf("\nEste programa calcula el promedio de los valores que ingrese\nEscriba los valores dando ENTER cada vez que desee agregar uno nuevo\nCuando haya ingresado el ultimo valor y no desee agregar uno mas teclee 0 y asi calcular el promedio\n\n");
    printf("Este programa solo admite valores numericos, cualquier valor distinto a un numero ocasionara un error\n\n");
    system("pause");
    system("CLS");
    while (choose != 1)
    {
        printf("introduzca primer valor numerico: ");
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
        printf("\nDesea calcular otro promedio?\n\nSi es asi, presione 0 \nEn caso contrario, presione 1\n");
        printf("\nDigite su eleccion: ");
        scanf("%d", &choose);
        system("CLS");
    }
    /*system("pause");*/
    system("CLS");
    printf("\n\n            Gracias por usar este programa                       \n\n");
    printf("  *******    ******      *****       ******     ****     ****          \n");
    printf("  **        **         ***     *    **    **    ** **   ** **          \n");
    printf("  ****       ******    **           **    **    **   ***   **          \n");
    printf("  **              **   ***     *    **    **    **         **          \n");
    printf("  *******    ******      *****       ******     **         **  \n\n\n\n\n");
   /* printf(" ****    ****    **********      \n");
    printf("   **** ****     ****    *****   \n");
    printf("    ******       ****      ****  \n");
    printf("     ****        ****      ****  \n");
    printf("    *******      ****      ****  \n");
    printf("  ****  ****     ****   *****    \n");
    printf(" ****    ****    **********  \n\n\n");*/
    printf("  *****   **    **       ******       ******     **       **     ******          \n");
    printf("  **   **  **  **       **    **     **    **    **       **    ***    *         \n");
    printf("  ******     **         ********     **    **     **     **     **               \n");
    printf("  **   **    **         **    **     **    **      **   **      ***    *         \n");
    printf("  ******     **         **    **      ******        *****        ******  \n\n\n\n\n");
    system("pause");
    system("CLS");
    return 0;
}