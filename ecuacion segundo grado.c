#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a = 0, b = 0, c = 0, x1 = 0, x2 = 0, raiz = 0, mult = 0, choose, x = 0, y = 0, M = 0;
    while (choose != 1)
    {
        printf("Este programa calcula el valor de X de una ecuacion cuadratica mediante la formula general\nIngrese los valores de su Ecuacion de Segundo Grado de la siguiente forma:\n");
        printf("ax^2 + bx + c = 0 (Sustituyendo los valores numericos por las letras a, b y c, respectivamente)\n\n");
        printf("a = ");
        scanf("%f", &a);
        printf("b = ");
        scanf("%f", &b);
        printf("c = ");
        scanf("%f", &c);
        printf("tu ecuacion deberia verse de la siguiente forma...\n        %.0fx^2 + %.0fx + %.0f = 0\n", a, b, c);
        printf("Si es correcto presiona 0\nSi es incorrecto presiona 1\nIngresa tu eleccion: ");
        scanf("%f", &M);
        if (M != 1)
        {
            mult = b * b - 4 * a * c;
            b = -b;
            raiz = sqrt(mult);
            x = b + raiz;
            y = b - raiz;
            x1 = x / (2 * a);
            x2 = y / (2 * a);
            if (mult > 0) {
                printf("X1 = %f\n", x1);
                printf("X2 = %f\n", x2);
            }
            else {
                printf("\nEsta escuacion no tiene solucion real\nX no pertenece a los numeros reales\n");
            }
            system("pause");
            system("CLS");
            printf("\nDesea calcular otra ecuacion?\nSi (presione '0')\nNo (Presione '1')\n");
            printf("Digite su eleccion: ");
            scanf("%f", &choose);
            system("CLS");
        }
        else {
        system("CLS");
        }
    }
    printf("Gracias por usar este programa\n\n");
    printf("  *******    ******      *****       ******     ****     ****          \n");
    printf("  **        **         ***     *    **    **    ** **   ** **          \n");
    printf("  ****       ******    **           **    **    **   ***   **          \n");
    printf("  **              **   ***     *    **    **    **         **          \n");
    printf("  *******    ******      *****       ******     **         **  \n\n\n\n\n");
    /*printf(" ****    ****    **********      \n");
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