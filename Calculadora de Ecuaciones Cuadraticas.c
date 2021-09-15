/* Se utiliza system("CLS"); con motivos de estetica para limpiar la pantalla y que aparezcan las instruciones posteriores
   Se utiliza system("pause"); con el fin de que no se cierre la consola al finalizar el programa, a veces finaliza y 
   cierra antes de que pueda ser visualizada la ejecucion (para utlizarlos se necesita agregar la libreria #include<stdlib.h>
   
   Para realizar la raiz cuadrada se agrego la libreria #include<math.h> y se utilizo la instruccion sqrt(variable) */
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a = 0, b = 0, c = 0, x1 = 0, x2 = 0, raiz = 0, mult = 0, choose, x = 0, y = 0, M = 0;
    while (choose != 1)
    {
        printf("Este programa calcula el valor de X de una Ecuacion Cuadratica mediante la formula general\nIngrese los valores de su Ecuacion de la siguiente forma:\n");
        printf("ax^2 + bx + c = 0 (Sustituyendo los valores numericos por las letras a, b y c, respectivamente)\n\n");
        printf("Introduce el valor cuadratico | a = ");
        scanf("%f", &a);
        printf("Introduce el valor lineal     | b = ");
        scanf("%f", &b);
        printf("Introduce la constante        | c = ");
        scanf("%f", &c);
        printf("\nTu ecuacion deberia verse de la siguiente forma...\n\n        %.0fx^2 + %.0fx + %.0f = 0\n\n", a, b, c);
        printf("Si es correcto presiona 0\nSi es incorrecto presiona 1\n\nEs correcto o Incorrecto?: ");
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
                printf("\nEl Valor de X1 = %f\n", x1);
                printf("\nEl Valor de X2 = %f\n", x2);
            }
            else {
                printf("\nEsta escuacion no tiene solucion real por medio de la formula general\nX no pertenece a los numeros reales\n");
            }
            system("pause");
            system("CLS");
            printf("\nDesea calcular otra ecuacion?\nPresiona 0 Para Si\nPresiona 1 Para No\n");
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
    printf("  *****   **    **       ******       ******     **       **     ******          \n");
    printf("  **   **  **  **       **    **     **    **    **       **    ***    *         \n");
    printf("  ******     **         ********     **    **     **     **     **               \n");
    printf("  **   **    **         **    **     **    **      **   **      ***    *         \n");
    printf("  ******     **         **    **      ******        *****        ******  \n\n\n\n\n");
    printf("Escuela Superior de Computo | Licenciatura en Ciencia de Datos\nFundamentos de Programacion by Cecilia Albortante Morato\nVences Cruz Angel Octavio | 1AV1     \n");
    system("pause");
    system("CLS");
    return 0;
}
